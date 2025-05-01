#include "leg.h"

Leg::Leg() {
	bRaised = false;
}

void Leg::raise() {
	bRaised = true;
}

void Leg::lower() {
	bRaised = false;
}