#pragma once
#include "Service.h"


class Schedule : public Service
{
public:
	IMPLEMENT_CLONE(Schedule)
		Schedule() // : Thread("test")
	{
		//		startThread();
		DBG("Schedule CONSTRUCTOR CALLED");
	};
	~Schedule() {}

	void init() // const
	{
		String temp = "/" + this->name.toLowerCase();
		this->uri = temp;
		server->registerService(httpMethod::GET, this->uri = String("/" + this->name.toLowerCase()), (Service*)this);
		DBG("Schedule init");
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


