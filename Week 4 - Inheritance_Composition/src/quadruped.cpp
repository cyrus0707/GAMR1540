#include "quadruped.h"

void Quadruped::raiseLeg(int iLegIndex) 
{
	if (iLegIndex > 0 && iLegIndex < kiNoLegs) 
	{
		legs[iLegIndex].raise();
	}
}

void Quadruped::lowerLeg(int iLegIndex) 
{
	if (iLegIndex > 0 && iLegIndex < kiNoLegs) 
	{
		legs[iLegIndex].lower();
	}
}

void Quadruped::speak()
{

}
