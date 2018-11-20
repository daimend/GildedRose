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
        response << "handleRequest " << this->name;
	}
};

