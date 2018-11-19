#pragma once
#include "Server.h"
#include "Services/Services.h"

// simple int array to mimic db row
struct DataBaseRow
{
	String name = "Gilded Rose";
	int rooms[4][2] = { {2 ,1}, {2,0}, {1,2}, {1,0} };
};

JUCE_IMPLEMENT_SINGLETON(ServerModule)

//==============================================================================
ServerModule::ServerModule()
	: server(8080)
{
	DataBaseRow db;
	database.reset(new Inn(db.name));
	database->init(db.rooms);

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

void ServerModule::helloWorld(Request &request, StreamResponse &response)
{
	response << "Welcome to Gilded Rose! " << htmlEntities(request.get("name", "... what's your name ?")) << "\n";
}

bool ServerModule::registerService(httpMethod method_, String route_, Service* obj_)
{
	requestHandlers.add(obj_);
	return false;
}

void ServerModule::serviceCallback(Request &request, StreamResponse &response)
{
	requestHandlers.call([&request, &response](Service& l) { l.handleRequest(request, response); });
}

// setup any default URIs / endpoints
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
