#ifndef QUADRUPED_H
#define QUADRUPED_H

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
	void speak();
};

#endif // QUADRUPED_H