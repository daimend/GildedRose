#pragma once
#include "Service.h"


class Schedule : public Service
{
public:
	IMPLEMENT_CLONE(Schedule)
	Schedule()
	{
		DBG(this->name << " constructor\n");
	};
	~Schedule() {}

	void init() // const
	{
		DBG(this->name << " init\n");
		server->registerService(new ServiceHandler((Service*)this, httpMethod::GET, this->uri));
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


