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

struct Capacity
{
	int numPeople = 0;
	int numLuggage = 0;
	Capacity(int people_, int luggage_) : numPeople(people_), numLuggage(luggage_)
	{}
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

class Guest
{
public:
	Guest(int id_, Capacity capacity_, int duration_) : id(id_), capacity(capacity_), duration(duration_)
	{
	};
	~Guest() {};

	Capacity getCapacity() { return this->capacity; };
	int getNumPeople() { return this->capacity.numPeople; }
	int getNumLuggage() { return this->capacity.numLuggage; }

private:
	Capacity capacity; // number of people and bags in the guest object
	int id; // guest id
	int duration = 0; // length of stay
};

class Room
{
public:
	Room(int roomNumber_, Capacity capacity_) : id(roomNumber_), capacity(capacity_), occupied(0,0)
	{
    };
	~Room()
	{
		guests.clear();
	}

	Capacity getCapacity() { return this->capacity; };
	int getRoomNumber() { return this->id; };

	int getNumOccupants() 
	{
		this->occupied.numPeople = 0;
		for (int i = 0; i < guests.size(); i++)
			this->occupied.numPeople += guests[i]->getCapacity().numPeople;

		return this->occupied.numPeople;
	};

	int getNumLuggage()
	{
		this->occupied.numLuggage = 0;
		for (int i = 0; i < guests.size(); i++)
			this->occupied.numLuggage += guests[i]->getCapacity().numLuggage;

		return this->occupied.numLuggage;
	};

	Capacity getVacanies()
	{
		return Capacity(this->capacity.numPeople - this->getNumOccupants(),
			this->capacity.numLuggage - this->getNumLuggage());
	}

	bool addGuest(Guest* guest_)
	{
		if (!guests.contains(guest_) // if the guest is already here, call the cops, they're impersonators!
			&&
			(guest_->getCapacity().numPeople < this->getVacanies().numPeople
			&& guest_->getCapacity().numLuggage < this->getVacanies().numPeople)
            )
		{
			guests.add(guest_);
			return true;
		}
		return false;
	}

	bool removeGuest(Guest* guest_)
	{
		if (guests.contains(guest_))
		{
			guests.remove(&guest_);
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

private:
	int id = 0;

	int roomCost = 10;
	int storageCost = 2;

	Array<Guest*> guests;
	Capacity capacity;
	Capacity occupied;
};

// Note: Inn Object would likely be a singleton class,
// unless Alison decided to franchise her Inn ;)
// dd: TODO: implement as DyncamicObjecy 
// to allow Javascript and JSON interoperability.
class Inn : public DynamicObject 
{
public:
	Inn(String name_) : name(name_)
	{

	}
	~Inn() 
	{
		rooms.clear();
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
		rooms.add(new Room(roomCount++, capacity_));
		DBG("room#" << rooms.getLast()->getRoomNumber() <<
			" maxPeople=" << rooms.getLast()->getCapacity().numPeople <<
			" maxLuggage " << rooms.getLast()->getCapacity().numLuggage);

		return rooms.getLast();
	}

	Room* getRoomById(int id)
	{
		for (int i = 0; i < rooms.size(); i++)
			if (rooms.getUnchecked(i)->getRoomNumber() == id)
				return rooms.getUnchecked(i);
		return nullptr;
	}

	// dd: todo: the business logic probably belongs elsewhere
	// we'll implement as function of the Inn for now as the
	// inn _should_ know everything about it's contents (rooms,
	// cost, guests, etc.) 
	bool getBooking(int numGuests, int numLuggage, bool isBooking = false)
	{
		output = String::empty;

		output = (JSON::toString(this));

		return true;
	}

	// returns the object state as JSON or XML
	String getOutput(bool asJSON = true)
	{

	}

	int roomCount = 0;
	String name;
	String output;
	OwnedArray<Room> rooms;
	// Calendar // DD: TODO need calendar object / thread
};

/*
	// some assumptions about profitability
	// * guests and luggage should be grouped into fewest rooms possible
	//   -> if a room is for some reason empty for the night, it does not need to be cleaned by the gnomes
	// * Since this is a "shared space" Inn, we might assume guests may come and go as they please...
	//   however, for the sake of scheduling the length of stay of each guest must determined at booking
	//   and we may have to assume the Inn has a checkout time.
	//   -> As the scheduling endpoint implies a daily schedule for the gnomes, gnome will likely be active
	//   for one hour past checkout (unless the room is still occupied).
*/
