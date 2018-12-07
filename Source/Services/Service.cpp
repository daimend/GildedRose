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

String Service::toJSON(DynamicObject* obj_)
{
	output = String::empty;
	MemoryOutputStream mo (4096);
	obj_->writeAsJSON(mo, 1, false, 3);
	output.append(String(mo.toUTF8()), 4096);
	mo.reset();
	return output;
}
