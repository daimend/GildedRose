#pragma once
#include "Schedule.h"
#include "Booking.h"

static inline void startServices()
{
	MAKE_PROTOTYPE(Booking)
	MAKE_PROTOTYPE(Schedule)
}