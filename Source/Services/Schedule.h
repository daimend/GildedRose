#pragma once
#include "Service.h"

#define SHCEDULE_POLL_INTERVAL  (1000 * 60)  // once a minute

class Schedule : public Service
{
public:
	IMPLEMENT_CLONE(Schedule)
	Schedule()
	{
		DBG(this->name << " constructor\n");
	};
    ~Schedule() { stopThread(1000); }

	void init() // const
	{
		DBG(this->name << " init\n");
		server->registerService(new ServiceHandler((Service*)this, httpMethod::GET, this->uri));
        initialized = true;
        startThread();
	}

	void run() // override
	{
		DBG("Scheduling Thread");
        while (!initialized)
            ServiceThread::run();
        Time start = Time::getCurrentTime();
        Database* db = server->getDatabase();
        while(!threadShouldExit())
        {
            start = Time::getCurrentTime();
            if (db->evictGuests())
                db->bookGnomes();
            wait(SHCEDULE_POLL_INTERVAL);
        }
	};
	
	void handleRequest(Request &request, StreamResponse &response) // override
	{
        response.flush();
        
        Database* db = server->getDatabase();

        response.setCode(200);
        DynamicObject* Inn = db->getInnObject(true);
        Inn->setProperty("error", "");
        output = toJSON(Inn);
        
        DBG("output = " << output);
        response << this->name << " = <pre>" << output << "</pre>";
	}
    
    bool initialized = false;
};


