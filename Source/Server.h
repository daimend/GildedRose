#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "Client.h"
#include "Models.h"

using namespace Mongoose;

/** supported REST API Methods */
enum httpMethod { GET, POST, PUT, DEL, ERR };

static std::map< httpMethod, const char * > httpmethod = {
   {GET, "GET"},
   {POST, "POST"},
   {PUT, "PUT"},
   {DEL, "DELETE"},
   {ERR, "ERROR"},
};

class Service;
typedef Inn Database;

struct ServiceHandler
{
	ServiceHandler(Service* service_, httpMethod method_, String route_) :
		service(service_), method(method_), route(route_) {};
	Service* service = nullptr;
	httpMethod method = httpMethod::ERR;
	String route = "/";
};

// Holds a list of Service handler callbacks
// Callbacks/Messages can be broadcast to all services
// or specific Service->Handlers.
// This implementation is Thread safe via callAsync
template <class ListenerClass,
	class ArrayType = Array<ListenerClass*>>
	class ServiceList : virtual public ListenerList<ListenerClass, Array<ListenerClass*>>
{
public:
	ServiceList() {}
	~ServiceList() {}

	template <typename Callback>
	void callAsync(ListenerClass* listenertoCall, Callback&& callback)
	{
        typename ArrayType::ScopedLockType lock(this->getListeners().getLock());

        for (int i = 0; i < this->getListeners().size(); i++)
		{
			auto* l = this->getListeners()[i];

			if (l == listenertoCall)
				callback(*l);
		}
	}
};

//==============================================================================
/*
    ServerModule
    Singleton instance manages all Sever<->Service communications as Subject to
    Notify Service Handler (Observers) of service requests.
    All Services must register their routes and callbacks with the ServerModule.
    The ServerModule implements the servers Controller interface to register
    Service listeners as endpoints of the API.
*/
class ServerModule : public Component, public WebController //, public DeletedAtShutdown
{
public:
	JUCE_DECLARE_SINGLETON(ServerModule, true)
	//==============================================================================

	// test / landing page
	void helloWorld(Request &request, StreamResponse &response);
	//==============================================================================
	/** registerService
	 *  registers a service endpoint handler for the given method and path
	 *  @returns false if the path already exists
	 */
	bool registerService(ServiceHandler* service_);
	bool registerService(httpMethod method_, String route_, Service* obj_);

	void serviceCallback(Request &request, StreamResponse &response);

	Database* getDatabase() { return database.get(); };

    //==============================================================================
    /** registerService
     * setup any default URIs / endpoints and their callbacks
     * DD: TODO: while it might be fairly trivial to impalement
     * Node/Express style "route/key/:value" request parsing
     * we'll stick to standard query strings for now...
     */
	void setupRoutes();

	ServiceHandler* getHandler(String method_, String route_);
	// DD: TODO: Temporary (auto-generated) GUI for testing, disable for release
	//==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
	ServerModule();
	~ServerModule();
	//==============================================================================
	Server server;
	ServiceList<Service> serviceObjects;
	OwnedArray<ServiceHandler> serviceHandlers;
	std::unique_ptr<WebViewComponent> client;
	std::unique_ptr<Database> database;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ServerModule)
};
