#pragma once

#include "../Server.h"

// =====================================================================
/** ServiceThread
*	Each service implementation has optional thread for any background
*	tasks / processing required for dynamic response / data
*/
class ServiceThread : public Thread
{
public:
	ServiceThread() : Thread("ServiceThread"), server(nullptr)
	{
		startThread();
	}
	~ServiceThread() 
	{
		stopThread(1000);
	}
	void run() override 
	{
		while (!threadShouldExit())
		{
			// Ensure the server has started before injecting services
			if ((server = ServerModule::getInstanceWithoutCreating()) != nullptr)
				break;
			wait(1000);
		}
		return init(/*server*/);
	};

	virtual void init(/*ServerModule* server*/) /*const*/ = 0;

	ServerModule* server;

	ServiceThread(const ServiceThread& other) : Thread("ServiceThread") {};
};


// abstract interface for service / endpoint implementations
// =====================================================================
/** Service
	Interface for modular (encapsulated) service implementations.
	This interface also provide object factory / prototype pattern methods
	to allow each service to be implemented as cloned modules and run via
	dependency injection. 
 */
class Service : virtual public ServiceThread
{
public:
	virtual ~Service() {}

	// httpHandler callback
	virtual void handleRequest(Request &request, StreamResponse &response) = 0;

	// called on each service when server starts for
	// any initialization tasks
	virtual void init(/*ServerModule* serv*/) /*const*/ = 0;

	// prototyping methods
	virtual Service* clone() const = 0;
    
    virtual String toJSON(DynamicObject* obj);
    
	static Service* makeService(String type);
	static Service* addPrototype(String type, Service* p);

	static HashMap<String, Service*> protoTable;

	String name; // service name
	String uri; // route / endpoint path
    String output;
};

#define IMPLEMENT_CLONE(TYPE) \
   Service* clone() const { return new TYPE(*this); } 

#define MAKE_PROTOTYPE(TYPE) \
   Service* TYPE ## _myProtoype = \
      Service::addPrototype(#TYPE, new TYPE());

