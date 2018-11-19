#pragma once
#include "../JuceLibraryCode/JuceHeader.h"
#include "Client.h"
#include "Models.h"

using namespace Mongoose;

/** REST API Methods */
enum httpMethod { GET, POST, PUT, DEL };

static std::map< httpMethod, const char * > method = {
   {GET, "GET"},
   {POST, "POST"},
   {PUT, "PUT"},
   {DEL, "DELETE"}
};

class Service;
typedef Inn Database;
//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class ServerModule : public Component, public WebController, public DeletedAtShutdown
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
	bool registerService(httpMethod method_, String route_, Service* obj_); // ,
//		std::function<void(Request &request, StreamResponse &response)> func

	void serviceCallback(Request &request, StreamResponse &response);

	void setupRoutes();

	// DD: TODO: Temporary (auto-generated) GUI for testing, disable for release
	//==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
	ServerModule();
	~ServerModule();
	//==============================================================================
    // Your private member variables go here...
	Server server;
	ListenerList<Service> requestHandlers;
	std::unique_ptr<WebViewComponent> client;
	std::unique_ptr<Database> database;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ServerModule)
};
