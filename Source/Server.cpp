#pragma once
#include "Server.h"
#include "Services/Services.h"

// simple int array to mimic db row
struct Inn1
{
	String name = "Gilded Rose";
	int rooms[4][2] = { {2 ,1}, {2,0}, {1,2}, {1,0} };
};

JUCE_IMPLEMENT_SINGLETON(ServerModule)

//==============================================================================
ServerModule::ServerModule()
	: server(8080)
{
	Inn1 inn1;
	inn.reset(new Inn(inn1.name));
	inn->init(inn1.rooms);

	setupRoutes();
	server.registerController(this);
	server.start();

	startServices();

	client.reset(new WebViewComponent());
	addAndMakeVisible(client.get());
    setSize (600, 400);
}

ServerModule::~ServerModule()
{
	if (client)
		client = nullptr;

	clearSingletonInstance();
}

/*
bool ServerModule::registerService(httpMethod method, String route, 
	iService* obj, std::function<void(Request &request, StreamResponse &response)> func)
{
	addRoute("GET", "/hello", ServerModule, hello);
}
*/

void ServerModule::helloWorld(Request &request, StreamResponse &response)
{
	response << "Welcome to Gilded Rose! " << htmlEntities(request.get("name", "... what's your name ?")) << "\n";
}


bool ServerModule::registerService(httpMethod method_, String route_, Service* obj_)
{
	requestHandlers.add(obj_);
	return false;
}

// setup URIs / endpoints for api calls
void ServerModule::setupRoutes()
{
	addRoute("GET", "/gildedrose", ServerModule, helloWorld);
}

//==============================================================================
void ServerModule::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
}

void ServerModule::resized()
{
	client->setBounds(this->getBounds());
}
