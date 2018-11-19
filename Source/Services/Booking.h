#pragma once
#include "Service.h"

class Booking : public Service
{
public:
	IMPLEMENT_CLONE(Booking)
	Booking() // : Thread("test")
	{
//		startThread();
		DBG("BOOKING CONSTRUCTOR CALLED");
	};
	~Booking() {}

	void init(ServerModule* server) const
	{
		DBG("Booking init");

		protoTable.set(this->name, this->obj);
	}

	/*
	void run() override 
	{
		DBG("Booking Thread");
	};
	*/
	/*
	void handleRequest(Request &request, StreamResponse &response)
	{

	}

	bool registerService(httpMethod method, String route, Service* obj,
		std::function<void(Request &request, StreamResponse &response)> func)
	{

	}
	*/

};

