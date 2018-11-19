#pragma once
#include "Service.h"

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
		server->registerService(httpMethod::GET,
			this->uri = String("/" + this->name.toLowerCase()), (Service*)this);
	}

	/*
	void run() override 
	{
		DBG("Booking Thread");
	};
	*/
	
	void handleRequest(Request &request, StreamResponse &response)
	{

	}
};

