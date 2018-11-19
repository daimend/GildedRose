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
/*
	bool registerService(httpMethod method, String route, Service* proto) // ,
//		std::function<void(Request &request, StreamResponse &response)> func)
	{

	}
	*/

};


