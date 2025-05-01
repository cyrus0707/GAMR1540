#pragma once

#include "leg.h"

using namespace std;

class Quadruped
{
protected:
	static const int kiNoLegs = 4;
	Leg legs[kiNoLegs];
public:
	void raiseLeg(int iLegIndex);
	void lowerLeg(int iLegIndex);
	virtual void speak() = 0;
};

