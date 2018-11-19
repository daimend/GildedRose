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

	void init() const
	{
		DBG("Schedule init");
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


