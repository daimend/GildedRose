#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
// Initial room logic test based on following criteria:
/*
Scenario

Hi and welcome to team Gilded Rose! As you know, we are a small, magical inn with a prime location in a prominent city run by a friendly innkeeper named Allison. She insists on running a top notch inn, and keeping 5 star reviews is crucial to her business. As such, she doesn’t want to overbook her rooms, or have rooms booked too soon after they have been vacated. The cleaning gnomes won’t have time to keep everything tidy if the turnover rate is too quick. Allison requests that you build a version one of a room booking system for her inn. Since the system is a v1, you don’t have to implement everything that would be needed for an actual system in this exercise -- you only have to do what we ask for in the specification.

Some background on the business.

The inn has FOUR rooms

●	ONE room sleeps TWO people and has ONE storage space
●	ONE room sleeps TWO people and has ZERO storage space
●	ONE room has TWO storage spaces and sleeps ONE person
●	ONE room sleeps ONE person and has ZERO storage space

Cleaning

●	All rooms must be cleaned after being occupied and prior to being rented again.
●	The gnomes cleaning squad needs ONE hour per room to clean it.

Guests can not store their luggage in another guest’s room.

Being that this is a shared space inn, guests might be in shared rooms if that’s the most profitable solution.

The cost is calculated per person according to this formula:
●	(Base room cost / number of people in the room ) + (base storage costs * number of items stored).
●	Base room cost is 10 Gold, storage cost is 2 Gold.

*/

//==============================================================================
/**
    API Models
    DD: TODO: break models out into separate class files 
 */

struct Capacity : public DynamicObject
{
public:
	int guests = 0;
	int luggage = 0;

	static Identifier getClassName() { return "Capacity"; }

	virtual const var& getProperty(const Identifier& propertyName) const
	{
		if (propertyName.toString().compare("luggage") == 0)
			return (var)this->luggage;
		else if (propertyName.toString().compare("guest") == 0)
			return (var)this->guests;
		return var::null;
	}

	Capacity() = delete;
	Capacity(const Capacity &other) : Capacity(other.guests, other.luggage)
	{
	}

	Capacity(int guests_, int luggage_) : guests(guests_), luggage(luggage_)
	{
		setProperty("guests", guests_);
		setProperty("luggage", luggage_);
	}
    ~Capacity() {}
};

//==============================================================================
// A comparator used to sort our data
class CapacitySort
{
public:
	CapacitySort(const String& attributeToSortBy, bool forwards = true)
		: attributeToSort(attributeToSortBy),
		direction(forwards ? 1 : -1)
	{
	}

	int compareElements(Capacity* first, Capacity* second) const
	{
		auto result = (int)first->getProperty(attributeToSort) < (int)second->getProperty(attributeToSort) ? -1
			: first->getProperty(attributeToSort) > second->getProperty(attributeToSort) ? 1 : 0;

		return direction * result;
	}

private:
	String attributeToSort;
	int direction;
};

class Gnomes
{
    Gnomes(int id_, int duration_ = 60) : id(id_), duration(duration_)
	{
	};
	~Gnomes() {};
    int id = 0;
    int duration = 60; // in minutes
};

class Guest : public Capacity
{
public:
	Guest(int id_, Capacity capacity_, int duration_ = -1) : Capacity(capacity_), id(id_), duration(duration_)
	{
		setProperty("id", id);
	};
	~Guest() {};

	Capacity* getCapacity() { return (Capacity*)this; };
	int getNumGuests() { return getCapacity()->guests; }
	int getNumLuggage() { return getCapacity()->luggage; }

private:
	int id; // guest id
	int duration = 0; // length of stay
};

class Room : public Capacity
{
public:
	Room(int roomNumber_, Capacity capacity_) : Capacity(capacity_), id(roomNumber_), occupied(0,0)
	{
		setProperty("id", roomNumber_);
    };
	~Room()
	{
		bookedGuests.clear();
	}

	Capacity* getCapacity() { return (Capacity*)this; };
	int getRoomNumber() { return this->id; };

	int getNumOccupants() 
	{
		this->occupied.guests = 0;
		for (int i = 0; i < bookedGuests.size(); i++)
			this->occupied.guests += bookedGuests[i]->guests;

		return this->occupied.guests;
	};

	int getNumLuggage()
	{
		this->occupied.luggage = 0;
		for (int i = 0; i < bookedGuests.size(); i++)
			this->occupied.luggage += bookedGuests[i]->luggage;

		return this->occupied.luggage;
	};

	Capacity getVacanies()
	{
		return Capacity(this->guests - this->getNumOccupants(),
			this->luggage - this->getNumLuggage());
	}

	bool addGuest(Guest* guest_)
	{
		if (!bookedGuests.contains(guest_)
			&&
			(guest_->guests < this->guests
			&& guest_->luggage < this->luggage)
            )
		{
			bookedGuests.add(guest_);
			return true;
		}
		return false;
	}

	bool removeGuest(Guest* guest_)
	{
		if (bookedGuests.contains(guest_))
		{
			bookedGuests.remove(&guest_);
			return true;
		}
		return false;
	}

	int getCost()
	{
		return (this->roomCost / this->getNumOccupants())
            + (this->storageCost * this->getNumLuggage());
	}

	int getRoomCost()
	{
		return this->roomCost;
	}

	int getStorageCost()
	{
		return this->storageCost;
	}

	Guest* getGuest(int index) {

		if (index < bookedGuests.size())
			return bookedGuests[index];
		return nullptr;
	}

	void varSetProperty(var& object, String key, var value) {
		
	}

private:
	int id = 0;

	int roomCost = 10;
	int storageCost = 2;
	Array<Guest*> bookedGuests;
	Capacity occupied;
};

// Note: Inn Object would likely be a singleton class,
// unless Alison decided to franchise her Inn ;)
// dd: TODO: implement as DyncamicObject 
// to allow Javascript and JSON interoperability.
// Using the DynamicObject and JSON structures also
// allow these objects to be used directly with
// PushNotifications and InAppPurchases
// In the context of this API, the PushNotifications
// in conjunction with the calendar thread
// could be used to notify the gnomes when its time
// to clean room[x], the guests when its time to
// vacate room[x], etc.
class Inn // : public DynamicObject
{
public:
	Inn(String _name) : name(_name)
	{
	}
	~Inn() 
	{
        
		rooms.clear(false);
	};

	// DD: TODO: Initializing the Inn may also create/start
	// the Inns Calendar tread for real time simulation.
	template <size_t rows, size_t cols>
	void init(int (&rooms_)[rows][cols])
	{
		rooms.clear();
		roomCount = 0;
		for (int i = 0; i < rows; i++)
			addRoom(Capacity(rooms_[i][0], rooms_[i][1]));
	}

	// more robust object factory usage implied.
	Room* addRoom(Capacity capacity_)
	{
		DBG("addRoom capacity: guests= " << capacity_.guests << " luggage = " << capacity_.luggage);
		CapacitySort sorter(String("luggage"));
//		int index = rooms.addSorted(sorter, new Room(roomCount++, capacity_));
		rooms.add(new Room(roomCount++, capacity_));

		DBG("room#" << rooms.getLast()->getRoomNumber() <<
			" maxPeople=" << rooms.getLast()->guests <<
			" maxLuggage " << rooms.getLast()->luggage);

/*		DBG("room#" << rooms[index]->getRoomNumber() <<
			" maxPeople=" << rooms[index]->guests <<
			" maxLuggage " << rooms[index]->luggage);

*/

		return rooms.getLast();
// 		return rooms[index];
	}

	Room* getRoomById(int id)
	{
		for (int i = 0; i < rooms.size(); i++)
			if (rooms.getUnchecked(i)->getRoomNumber() == id)
				return rooms.getUnchecked(i);
		return nullptr;
	}

	// dd: todo: the business logic probably belongs elsewhere
	// Possibly as function (procedure) of the db...
	// We'll implement as function of the Inn for now as this
	// is our pseudo db and the inn _should_ know everything 
	// about it's contents (rooms, cost, guests, etc.) 
	bool getBooking(int numGuests, int numLuggage, bool isBooking = false)
	{
//		Guest* guest = guests.add(new Guest(guestId++, Capacity(numGuests, numLuggage)));

		for (int i = 0; i < rooms.size(); i++)
		{
			var json(rooms[i]);
			output += (JSON::toString(json));
		}


		DBG("output = " << output);

		return true;
	}

	// returns the object state as JSON or XML
	// dd: todo: 
	String getOutput(bool asJSON = true)
	{
		return output; // = asJSON ? (JSON::toString(this)) : ""; // XmlDocument doc(output) ;
	}

	int guestId = 0;
	int roomCount = 0;
	String name;
	String output;
	OwnedArray<Guest> guests;
	OwnedArray<Room> rooms;
//	CapacitySort* sorter;
	// Calendar // DD: TODO need calendar object / thread for real-time booking/scheduling
};

/*
	// some assumptions about profitability
	// * guests and luggage should be grouped into fewest rooms possible
	//   -> if a room is for some reason empty for the night, it does not need to be cleaned by the gnomes
	// * Since this is a "shared space" Inn we might assume:
	//   1) Guests can be split up between multiple rooms, however
	//		1a) Since "guests cannot store their luggage in another guests room", the luggage must be linked to
	//		    at least one guest in the party
	//   2) For the sake of scheduling the length of stay of each guest must determined at booking
	//      and we may have to assume the Inn has a checkout time.
	//   -> As the scheduling endpoint implies a daily schedule for the Inn, the gnomes will likely be active
	//   for one hour past checkout (unless the room is still occupied).

	///  So, based on these assumptions let's make some examples we can test:
	// first we'll test to see if our code works
	// then we'll see if letting guests 'share rooms' is more profitable
	// then we'll optimize our code for the most efficient sort
	// The XML/JSON libs already implement sort / comparator methods for child/nodes, so way will probably lean on
	// this first for simplicity.  Optionally SortedSet<> and/or ElementComparator will accomplish same.

	// sort rooms by max luggage capacity
			room#2 max.guests=1 max.luggage 2 occupied.guests=0 occupied.luggage=0 vacant.guests = 1 vacant.luggae = 2
			room#0 max.guests=2 max.luggage 1 occupied.guests=0 occupied.luggage=0 vacant.guests = 2 vacant.luggae = 1
			room#1 max.guests=2 max.luggage 0 occupied.guests=0 occupied.luggage=0 vacant.guests = 2 vacant.luggae = 0
			room#3 max.guests=1 max.luggage 0 occupied.guests=0 occupied.luggage=0 vacant.guests = 1 vacant.luggae = 0

	addGuest(guests:2, luggage:3);

			room#2 max.guests=1 max.luggage 2 occupied.guests=1 occupied.luggage=2 vacant.guests = 0 vacant.luggae = 0
			room#0 max.guests=2 max.luggage 1 occupied.guests=1 occupied.luggage=1 vacant.guests = 1 vacant.luggae = 0
			room#1 max.guests=2 max.luggage 0 occupied.guests=0 occupied.luggage=0 vacant.guests = 2 vacant.luggae = 0
			room#3 max.guests=1 max.luggage 0 occupied.guests=0 occupied.luggage=0 vacant.guests = 1 vacant.luggae = 0

	// in this scenario we've split the guests up between rooms 2 and 0, when we would have otherwise had to turn them
	// away (no room holds 3 luggage), however, the inn has no storage left, and would have to turn away any guests
	// with luggage.

*/

