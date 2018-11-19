#pragma once

#include "../Server.h"
// abstract interface for service / endpoint implementations

// =====================================================================
/** ServiceThread
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
			// Ensure the server has started before starting services
			if ((server = ServerModule::getInstanceWithoutCreating()) != nullptr)
				break;
			wait(1000);
		}
		return init(/*server*/);
	};

	virtual void init(/*ServerModule* server*/) const = 0;

	ServerModule* server;

	ServiceThread(const ServiceThread& other) : Thread("ServiceThread") {};
};


// =====================================================================
/** Service

	Interface for all Service implementations.
	This interface provide object factory and prototype pattern methods
	to allow each service to be implemented as independent modules via
	dependency injection. 
 */
class Service : virtual public ServiceThread
{
public:
	virtual ~Service() {}

	//	virtual void handleRequest(Request &request, StreamResponse &response) = 0;

		/** Register service with with server */
	//	virtual bool registerService(httpMethod method, String route, iService* obj, 
	//		std::function<void(Request &request, StreamResponse &response)> func) = 0;

	// called on each service when server starts for
	// any initialization tasks
	virtual void init(/*ServerModule* serv*/) const = 0;

	// prototyping methods
	virtual Service* clone() const = 0;
	static Service* makeService(String type);
	static Service* addPrototype(String type, Service* p);

	static HashMap<String, Service*> protoTable;

	String name;
	Service* obj;
};

#define IMPLEMENT_CLONE(TYPE) \
   Service* clone() const { return new TYPE(*this); } 

#define MAKE_PROTOTYPE(TYPE) \
   Service* TYPE ## _myProtoype = \
      Service::addPrototype(#TYPE, new TYPE());

