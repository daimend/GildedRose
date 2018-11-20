#pragma once
#include "Service.h"

HashMap<String, Service*> Service::protoTable;

Service* Service::makeService(String type)
{
	Service* proto;
	if (!protoTable.contains(type))
	{
		DBG("prototype not found");
		return nullptr;
	}
	return proto->clone();
}

Service* Service::addPrototype(String type, Service* p)
{
//	DBG("adding prototype for " << type);
	p->uri = "/" + (p->name = type).toLowerCase();
	protoTable.set(type, p);
	return p;
}

