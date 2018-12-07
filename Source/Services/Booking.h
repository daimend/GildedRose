#pragma once
#include "Service.h"
#include "../Models.h"

class Booking : public Service
{
public:
	IMPLEMENT_CLONE(Booking)
	Booking() 
	{
		DBG(this->name << "constructor\n");
	};
	~Booking() {}

	void init(/*ServerModule* server*/) // const
	{
		DBG(this->name << " init\n");
		server->registerService(new ServiceHandler((Service*)this, httpMethod::GET, this->uri));
		server->registerService(new ServiceHandler((Service*)this, httpMethod::POST, this->uri));
		// API service could also expose DELETE to remove a booking, etc.
	}

	/*
	void run() override 
	{
		DBG("Booking Thread");
	};
	*/
	
	void handleRequest(Request &request, StreamResponse &response)
	{
		response.flush();
		bool OK = false;
		
		isBooking = String(request.getMethod()).compare(httpmethod[httpMethod::POST]) == 0 
			|| String(request.get("method")).compare("post") == 0;
		numGuests = String(request.get("guests")).getIntValue();
		numLuggage = String(request.get("luggage")).getIntValue();
		
		if (numGuests == 0)
		{
			response.setCode(400); // bad request
			output = "{\"error\": \"bad request. Please provide guests=<x>&luggage=<y>\"}";
		}
		else
		{
			Database* db = server->getDatabase();
			Guest* guest = new Guest(guestId++, Capacity(numGuests, numLuggage));
			
			if (OK = db->getBooking(guest))
			{
				response.setCode(200);
				DynamicObject* Inn = db->getInnObject();
				Inn->setProperty("bookingCost", db->getBookingCost(guest));
				output = toJSON(Inn);
				if (!isBooking)
					db->removeGuest(guest);
			}
			else
			{
				response.setCode(404);
				output = "{\"error\": \"could not complete booking!\"}";
				db->removeGuest(guest);
			}
		}
		
		DBG("output = " << output);
		response << this->name << " = <pre>" << output << "</pre>";
	}

	int numGuests;
	int numLuggage;
	int guestId = 0;
	bool isBooking;
};

