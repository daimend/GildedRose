#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "Client.h"
#include "Models.h"
// #include "Services/iService.h"
using namespace Mongoose;

/** REST API Methods */
enum httpMethod { GET, POST, PUT, DEL };

static std::map< httpMethod, const char * > method = {
   {GET, "GET"},
   {POST, "POST"},
   {PUT, "PUT"},
   {DEL, "DELETE"}
};

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

//	void hello(Request &request, StreamResponse &response);
//	bool registerService(httpMethod method, String route, iService* obj,
//		std::function<void(Request &request, StreamResponse &response)> func);
	void setupRoutes();
	//==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
	ServerModule();
	~ServerModule();
    //==============================================================================
    // Your private member variables go here...
	Server server;
	std::unique_ptr<WebViewComponent> client;
	std::unique_ptr<Inn> inn;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ServerModule)
};
