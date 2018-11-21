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

bool ServerModule::registerService(httpMethod method_, String route_, Service* obj_) // ,std::function<void(Request &request, StreamResponse &response)> func)
{

	return true;
}

bool ServerModule::registerService(ServiceHandler* service_)
{
	// dd: todo: error checking, service added more than once, etc.
	serviceHandlers.addIfNotAlreadyThere(service_);
	serviceObjects.add(service_->service);
	addRoute(httpmethod[service_->method], std::string(service_->route.getCharPointer()),
		ServerModule, serviceCallback);
	return true;
}

void ServerModule::serviceCallback(Request &request, StreamResponse &response)
{
	String method = request.getMethod();
	String url = request.getUrl();
	DBG("method = " << method << " url = " << url);

	ServiceHandler* handler = getHandler(method, url);
	
	if (handler)
		serviceObjects.callAsync((Service*)handler->service,
			[&request, &response](Service& l) { l.handleRequest(request, response); });
}

void ServerModule::setupRoutes()
{
	addRoute("GET", "/", ServerModule, helloWorld);
}

ServiceHandler* ServerModule::getHandler(String method_, String route_)
{
	for (int i = 0; i < serviceHandlers.size(); i++)
	{
		ServiceHandler* tmp = serviceHandlers.getUnchecked(i);
		if (method_.compare(httpmethod[tmp->method]) == 0 
			&& tmp->route == route_)
			return tmp;
	}
	return nullptr;
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
