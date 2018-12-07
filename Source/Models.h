#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/**
 *   API Helper objects / data structures
 */

/**
* @LengthOfStay
* simple struct to hold the check-in/check-out
* start and end times
* of guests (and gnomes)...
*/
 struct LengthOfStay // : public DynamicObject
{
    // default constructor will create a default LengthOfStay for
    // Guest:  start = now, end = 10AM following day.
    // Gnome:  start = now (10AM), end = start + 1 hour (11AM: 1 hour after guest leaves)
    LengthOfStay(const bool isGnome = false)
    {
        start = Time::getCurrentTime();
        end = start + RelativeTime::seconds(59 - start.getSeconds()) + RelativeTime::minutes(59 - start.getMinutes());
        if (isGnome)
            end = end + RelativeTime::hours(1);
        else
            end = end + RelativeTime::hours((23 - start.getHours()) + checkout);
    }
    // copy
    LengthOfStay(const LengthOfStay &other) : LengthOfStay(other.start, other.end) {}
    // explicit
    LengthOfStay(Time start_, Time end_) : start(start_), end(end_){}
    ~LengthOfStay(){}
    int checkout = 10; // 10AM
    Time start;
    Time end;
};

class Capacity : public DynamicObject
{
public:
	int guests = 0;
	int luggage = 0;
	int max_guests = 0;
	int max_luggage = 0;
	int available_guests = 0;
	int available_luggage = 0;

//	static Identifier getClassName() { return "Capacity"; }

    const var& getProperty(const Identifier& propertyName) const
	{
        int retval = 0;
        String prop = propertyName.toString();
		if (prop.compare("luggage") == 0)
			retval = luggage;
		else if (prop.compare("guests") == 0)
			retval = guests;
		else if (prop.compare("max_luggage") == 0)
			retval = max_luggage;
		else if (prop.compare("max_guests") == 0)
			retval = max_guests;
		else if (prop.compare("available_luggage") == 0)
			retval = available_luggage;
		else if (prop.compare("available_guests") == 0)
			retval = available_guests;
        else
            retval = DynamicObject::getProperty(propertyName);
		return retval;
	}

	void setProperty(const Identifier& propertyName, const var& newValue)
	{
		if (propertyName.toString().compare("guests") == 0)
			setProperty("available_guests", available_guests = max_guests - int(newValue));
		else if (propertyName.toString().compare("luggage") == 0)
			setProperty("available_luggage", available_luggage = max_luggage - int(newValue));
		return DynamicObject::setProperty(propertyName, newValue);
	}

	Capacity() = delete;
	Capacity(const Capacity &other) : Capacity(other.guests, other.luggage)
	{
	}

	Capacity(int guests_, int luggage_) : guests(guests_), luggage(luggage_)
	{
		setProperty("guests", guests = guests_);
		setProperty("luggage", luggage = luggage_);
		setProperty("max_guests", max_guests = guests_);
		setProperty("max_luggage", max_luggage = luggage_);
		setProperty("available_guests", available_guests = max_guests - guests);
		setProperty("available_luggage", available_luggage = max_luggage - luggage);
	}
    ~Capacity() 
	{
	
	}
};

//==============================================================================
// A comparator used to sort our guests/luggage, takes optional second argument
// as vector for priority sort on both attributes (see std::vector and std::priority_queue)
class CapacitySort // : public ElementComparator<Capacity*>
{
public:
    CapacitySort(const String& firstAttribute, const String& secondAttribute, bool forwards = false)
		: firstSortBy(firstAttribute), secondSortBy(secondAttribute),
		direction(forwards ? 1 : -1)
	{
	}

	int compareElements(Capacity* first, Capacity* second)
	{
		int a = int(first->getProperty(firstSortBy));
        int b = int(second->getProperty(firstSortBy));
        int c = int(first->getProperty(secondSortBy));
        int d = int(second->getProperty(secondSortBy));

		if (a == b && c > d) { a = 0; b = 1; }
		else if (a == b && c < d) {a = 1; b = 0;}

		int result = (a < b) ? -1 : (a > b) ? 1 : 0;
		return direction * (int)result;
	}

private:
	String firstSortBy;
    String secondSortBy;
	int direction;
};

//==============================================================================
/**
 API Models
 DD: TODO: break models out into separate class files
 */

/** @Guest
* Guest objects are analagous to "party"
* meaning a guest may contain more than
* one person and luggage
* Guests (and luggage) may be split up
* among more than one room and as such
* are reference counted.  Note that because
* luggage is a child of guest, luggage must
* remain with at least on person in the party.
* When the guest(s) are evicted from their
* room(s), the luggage goes with them.
*/
class Guest : public Capacity
{
public:
    using Ptr = ReferenceCountedObjectPtr<Guest>;
    
    Guest() = default;
    
	Guest(int id_, Capacity capacity_, LengthOfStay duration_ = LengthOfStay()) : Capacity(capacity_), id(id_), duration(duration_)
	{
		setProperty("id", id);
        setProperty("type", "guest");
        setProperty("checkin", duration.start.toString(true, true));
        setProperty("checkout", duration.end.toString(true, true));
	};
	~Guest() {};

	Capacity* getCapacity() { return (Capacity*)this; };

    int getGuestId() { return id; }
    
    LengthOfStay getDuration() { return duration; }
    
    LengthOfStay setDuration(LengthOfStay duration_) { return duration = duration_; }

private:
    
	int id; // guest id
	LengthOfStay duration; // length of stay
};

/** @Gnome
 *  a gnome is just a guest with a one hour stay
 *  when the guests checkout, the gnomes checkin
 *  The gnomes are cast to guests (of type gnome)
 *  and will populate rooms for one hour, during
 *  which the room cannot be booked by guests
 */
class Gnome : public Guest
{
public:
    Gnome(int id_, Capacity capacity_, LengthOfStay duration_ = LengthOfStay(true)) : Guest(id_, capacity_, duration_)
    {
        room = id_;
        setProperty("id", id_);
        setProperty("room", room);
        setProperty("type", "gnome");
    };
    ~Gnome() {};
    
    void setStartTime(Time start_)
    {
        this->duration.start = start_;
        this->duration.end = start_ + RelativeTime::seconds(59 - start_.getSeconds())
            + RelativeTime::minutes(59 - start_.getMinutes())
            + RelativeTime::hours(1);
        DBG("gnome checkin = " << this->duration.start.toString(true, true));
        setProperty("checkin", this->duration.start.toString(true, true));
        setProperty("checkout", this->duration.end.toString(true, true));
    }
    
    LengthOfStay getDuration() { return duration; }
    
    int getRoomId() { return room; }
    

private:
    int id = 0;
    int room = 0;
    LengthOfStay duration;
};

/** @Room
 *  Room objects inherit from Capacity
 *  which keeps track of the number of room
 *  occupants and vacancies.
 */
class Room : public Capacity
{
public:
	Room(int roomNumber_, Capacity capacity_) : Capacity(capacity_), id(roomNumber_)
	{
		setProperty("id", roomNumber_);
    };
	~Room()
	{
        bookedLuggage.clear();
		bookedGuests.clear();
	}

	Capacity* getCapacity() { return (Capacity*)this; };
	int getRoomNumber() { return this->id; };

    // @returns guest and luggage count for given guest
	Capacity getGuestCount(Guest* guest_)
	{
        int numGuests = 0, numLuggage = 0;
        for (int i=0; i < bookedGuests.size(); i++)
        {
            if (bookedGuests.getUnchecked(i) == guest_)
                numGuests++;
        }
        for (int i=0; i < bookedLuggage.size(); i++)
        {
            if (bookedLuggage.getUnchecked(i) == guest_)
                numLuggage++;
        }
        return Capacity(numGuests, numLuggage);
	};

	Capacity getVacanies()
	{
		return Capacity(available_guests,
			available_luggage);
	}

    /** @addGuest
     * adds number of guests and luggage to available slots
     * @return capacity structure with num guests and luggage added
     */
	bool addGuest(Guest* guest_, int numGuests, int numLuggage)
	{
		if (numGuests > available_guests || numLuggage > available_luggage)
			return false;

        for (int i = 0; i < numLuggage; i++)
            bookedLuggage.add(guest_);
        
        for (int i = 0; i < numGuests; i++)
            bookedGuests.add(guest_);

        updateCapacity(bookedGuests.size(), bookedLuggage.size());

        return true;
	}

    bool removeGuest(Guest* guest_)
	{
		while (bookedGuests.contains(guest_))
			bookedGuests.removeObject(guest_);

		while (bookedLuggage.contains(guest_))
			bookedLuggage.removeObject(guest_);
        
        updateCapacity(bookedGuests.size(), bookedLuggage.size());
        
        return true;
	}
    
    Capacity updateCapacity(int numGuests, int numLuggage)
    {
        setProperty("guests", numGuests);
        setProperty("luggage", numLuggage);
        setProperty("cost", getRoomCost());
        
        return Capacity(numGuests, numLuggage);
    }
    
    int getGuestCost(Guest* guest_)
    {
        int retval = 0;
        Capacity cap = getGuestCount(guest_);
        retval =  (this->roomCost / bookedGuests.size())
            + (this->storageCost * cap.luggage);
        return retval;
    }

	int getRoomCost()
	{
        int retval = 0;
        for (int i = 0; i < bookedGuests.size(); i++)
            retval += getGuestCost(bookedGuests[i].get());
        return retval;
	}

    ReferenceCountedArray<Guest> getGuests()
    {
        return bookedGuests;
    }
    
    ReferenceCountedArray<Guest> getLuggage()
    {
        return bookedLuggage;
    }

private:
	int id = 0;

	int roomCost = 10;
	int storageCost = 2;
	ReferenceCountedArray<Guest> bookedGuests;
    ReferenceCountedArray<Guest> bookedLuggage;
};

/** @Inn
* Note: Inn Object would likely be a singleton class,
* unless Alison decided to franchise her Inn ;)
* dd: TODO: implement as DyncamicObject
* to allow Javascript and JSON interoperability.
* Using the DynamicObject and JSON structures also
* allow these objects to be used directly with
* PushNotifications and InAppPurchases
* In the context of this API, the PushNotifications
* in conjunction with the calendar thread
* could be used to notify the gnomes when its time
* to clean room[x], the guests when its time to
* vacate room[x], etc.
*/
class Inn : public Capacity
{
public:
	Inn(String name_) : Capacity(0, 0), name(name_), 
	sorterLuggage(String("available_luggage"), String("available_guests")),
	sorterGuests(String("available_guests"), String("available_luggage"))
	{
        roomArray = new DynamicObject();
        gnomeArray = new DynamicObject();
        InnObject = new DynamicObject();
        
        setProperty("id", "Gilded Rose");
        setProperty("error", "");
	}
    ~Inn() { /*clear();*/ };
    
    void clear()
    {
        while(occupants.size() > 0)
            removeGuest(occupants.getLast());
		gnomes.clear(false);
        rooms.clear(false);
    }
                    
    static Identifier getClassName() { return "Inn"; }

	/** @init
	* Dynamically "unwraps" the "database" into
	* "jsonified" model object structures
	*/
	template <size_t rows, size_t cols>
	void init(int (&rooms_)[rows][cols])
	{
        // set up some DynamicObject containers
        // to help format JSON output of our models
        auto JSONHelper =
        [](juce::var& object, juce::String key, juce::var value ){
            if( object.isObject() ) {
                object.getDynamicObject()->setProperty(key, value);
            }
        };
        
        InnObject->setProperty(getClassName(), this);
        JSONHelper(roomArray, "array", Array<var>());
        JSONHelper(gnomeArray, "array", Array<var>());
        
		for (int i = 0; i < rows; i++)
		{
            Capacity room_cap = Capacity(rooms_[i][0], rooms_[i][1]);
			Room* room = addRoom(room_cap);
			room->setProperty("guests", 0);
			room->setProperty("luggage", 0);
			max_guests = available_guests += room->available_guests;
			max_luggage = available_luggage += room->available_luggage;
			guestArray.add(new DynamicObject());
			JSONHelper(guestArray.getReference(i), "array", Array<var>());

            // for every room there is a gnome of the same capacity
            gnomes.add(new Gnome(i, room_cap, LengthOfStay(true)));
		}
        updateCapacity();
	}

	// more robust object factory usage implied.
	Room* addRoom(Capacity capacity_)
	{
		rooms.add(new Room(roomId++, Capacity(capacity_)));
		return rooms.getLast();
	}

    bool bookGuest(Guest* guest_, Room* room_, int numGuests, int numLuggage)
    {
        bool retval = false;
        if (numGuests <= 0)
            return false;
        occupants.addIfNotAlreadyThere(guest_);
        retval = room_->addGuest(guest_, numGuests, numLuggage);
        if (retval && !dynamic_cast<Gnome*>(guest_))
            gnomes[room_->getRoomNumber()]->setStartTime(guest_->getDuration().end);
        updateCapacity();
        return retval;
    }
    
    bool removeGuest(Guest* guest_, bool delete_ = false)
    {
        for (int i = 0; i < rooms.size(); i++)
            rooms[i]->removeGuest(guest_);
        occupants.removeObject(guest_, delete_);
        updateCapacity();
        return true;
    }
    
    bool evictGuests()
    {
        bool retval = false;
        for (int i = 0; i < occupants.size(); i++)
            if (Time::getCurrentTime() >= occupants[i]->getDuration().end)
                retval = removeGuest(occupants[i]);
        return retval;
    }
    
    void bookGnomes()
    {
        for (int i = 0; i < rooms.size(); i++)
            if (!rooms[i]->getGuests().size() && // if room is empty
                Time::getCurrentTime().getMilliseconds()
                - gnomes[i]->getDuration().start.getMilliseconds() <= (1000 * 60)) // and a gnome is scheduled to clean it
                bookGuest(gnomes[i], rooms[i], gnomes[i]->guests, gnomes[i]->luggage);
    }
    
    Capacity updateCapacity()
    {
        int numGuests = 0, numLuggage = 0;
        for (int i = 0; i < occupants.size(); i++)
        {
            numGuests += occupants[i]->guests;
            numLuggage += occupants[i]->luggage;
        }
        
        setProperty("guests", numGuests);
        setProperty("luggage", numLuggage);
        setProperty("max_guests", max_guests);
        setProperty("max_luggage", max_luggage);
        setProperty("available_guests", available_guests);
        setProperty("available_luggage", available_luggage);
        setProperty("cost", getTotalCost());
        
        return Capacity(available_guests,
                        available_luggage);
    }

    int getTotalCost()
    {
        int retval = 0;
        for (int i = 0; i < rooms.size(); i++)
            retval += rooms[i]->getRoomCost();
        return retval;
    }
    
    int getBookingCost(Guest* guest_)
    {
        int retval = 0;
        for (int i = 0; i < rooms.size(); i++)
            for (int ii = 0; ii < rooms[i]->getGuestCount(guest_).guests; ii++)
                retval += rooms[i]->getGuestCost(guest_);
        return retval;
    }
    /** @getBooking
	* dd: todo: the business logic probably belongs elsewhere
	* Possibly as function (procedure) of the db...
	* We'll implement as function of the Inn for now as this
	* is our pseudo db and the inn _should_ know everything
	* about it's contents (rooms, cost, guests, etc.)
    * To help enforce encapsulation, the model will perform
    * the logic to check a booking, and the booking service
    * is responsible for handling any result based logic
    */
	bool getBooking(Guest* guest_)
	{
        bool retval = false;
        Array<int> checked = { 0 };
        int numGuests = guest_->guests;
        int numLuggage = guest_->luggage;
        
		rooms.sort((available_luggage > 0 && numLuggage > 0) ? sorterLuggage : sorterGuests);

		if (numGuests > 0 &&
            (numGuests <= available_guests
             && numLuggage <= available_luggage))
		{
			int filledGuests = 0, filledLuggage = 0, maxLuggage = 0, maxGuests = 0;
            
			while (filledGuests < numGuests)
			{
				Room* room = rooms[0];
                
				maxLuggage = room->getVacanies().luggage;
				maxGuests = room->getVacanies().guests;

				int waitingGuests = numGuests - filledGuests;
				int waitingLuggage = numLuggage - filledLuggage;

				// Some tweaks to spread guests across multiple rooms (shared inn)
				// to help maximize profitability
				// Priority sort will favor guests with luggage first, 
				// then guests without luggage across rooms without luggage. 
				if ((maxLuggage > waitingLuggage && maxGuests > 1))
					maxGuests -= 1;
                if (maxLuggage < waitingLuggage && waitingGuests >= 1 && maxGuests > 1)
                    maxGuests -= 1;
                if (maxLuggage < waitingLuggage && waitingGuests == 1)
                    maxGuests = 0;
				if (maxGuests == 1 && maxLuggage == 0 && waitingLuggage > 0)
					maxGuests = 0;

				maxGuests = jmin(waitingGuests, maxGuests);
				maxLuggage = jmin(waitingLuggage, maxLuggage);

				if (bookGuest(guest_, room, maxGuests, maxLuggage))
				{
					filledGuests += maxGuests;
					filledLuggage += maxLuggage;
                    rooms.sort((numLuggage > filledLuggage) ? sorterLuggage : sorterGuests, true);
				}
                else
				{
                    checked.set(rooms[0]->getRoomNumber(), 1);
                    rooms.move(0, rooms.size()-1);
                }
            
                if (available_guests < 0 || (checked.size() == rooms.size() && !checked.contains(0)))
                {
                    if ((filledGuests < numGuests || filledLuggage < numLuggage))
                        retval = false;
                    break;
                }
                retval = true;
			}
		}
        else
            retval = false;
        
		return retval;
	}
    
    // @getInnObject
    // @returns model objects as custom JSON objects
    // based on request requirements...
    DynamicObject* getInnObject(bool schedule_ = false)
    {
        gnomeArray.getProperty("array", var()).getArray()->clear();
        for (int i = 0; i < rooms.size(); i++)
        {
            if (auto room = roomArray.getProperty("array", var()).getArray())
            {
                if (auto booked_guest = guestArray[i].getProperty("array", var()).getArray())
                {
                    booked_guest->clear();
                    for (int ii = 0; ii < rooms[i]->getGuests().size(); ii++)
                    {
                        Guest* booked = rooms[i]->getGuests()[ii].get();
                        Capacity cap = rooms[i]->getGuestCount(booked);
                        if (cap.guests > 0)
                        {
                            DynamicObject* guest_obj = new DynamicObject();
                            // if the gnomes are cleaning the room
                            // list them and their "checkout" time
                            if (schedule_)
                            {
                                guest_obj->setProperty("checkout",
                                    booked->getDuration().end.toString(true, true));
                                guest_obj->setProperty("type", dynamic_cast<Gnome*>(booked) ? "gnome" : "guest");
                            }
                            guest_obj->setProperty("id", booked->getGuestId());
                            guest_obj->setProperty("guests", cap.guests);
                            guest_obj->setProperty("luggage", cap.luggage);
                            booked_guest->addIfNotAlreadyThere((DynamicObject*)guest_obj);
                            rooms[i]->setProperty("guest", guestArray[i]);
                        }
                    }
                }
                room->addIfNotAlreadyThere((DynamicObject*)rooms[i]);
                // list the gnome schedules
                if (schedule_)
                {
                    if (auto scheduled_gnomes = gnomeArray.getProperty("array", var()).getArray())
                    {
                        if (rooms[i]->getGuests().size() && !dynamic_cast<Gnome*>(rooms[i]->getGuests()[0].get()))
                        {
                            DynamicObject* gnome_obj = new DynamicObject();
                            gnome_obj->setProperty("id", gnomes[i]->getGuestId());
                            gnome_obj->setProperty("checkin", gnomes[i]->getDuration().start.toString(true, true));
                            gnome_obj->setProperty("room", gnomes[i]->getRoomId());
                            scheduled_gnomes->addIfNotAlreadyThere((DynamicObject*)gnome_obj);
                        }
                    }
                    
                }
            }
        }
        InnObject->getProperty("Inn").getDynamicObject()->setProperty("rooms", roomArray);
        if (schedule_)
            InnObject->getProperty("Inn").getDynamicObject()->setProperty("gnomes", gnomeArray);
            
        return InnObject.get();
    }

    int roomId = 0, guestId = 0;
	String name;
	OwnedArray<Guest> occupants;
    OwnedArray<Gnome> gnomes;
	OwnedArray<Room> rooms;
    DynamicObject::Ptr InnObject;
    Array<var> guestArray;
    var roomArray;
    var gnomeArray;

	CapacitySort sorterLuggage;
	CapacitySort sorterGuests;
};

