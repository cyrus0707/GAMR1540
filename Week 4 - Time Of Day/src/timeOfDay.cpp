#include "timeOfDay.h"

TimeOfDay::TimeOfDay()
{
	iHours = 0;
	iMin = 0;
	iSeconds = 0;
}

TimeOfDay::TimeOfDay(int iH, int iM, int iS)
{
	iHours = iH;
	iMin = iM;
	iSeconds = iS;
}

std::string TimeOfDay::toString()
{
	return (to_string(iHours) + ":" + to_string(iMin) + ":" + to_string(iSeconds));
}

void TimeOfDay::increment()
{
	if (iSeconds < 59)
	{
		iSeconds++;
	}
	else if (iMin < 59)
	{
		iMin++; 
		iSeconds = 0;
	}
	else if (iHours < 23)
	{
		iHours++; 
		iMin = 0; 
		iSeconds = 0;
	}
	else
	{
		iHours = 0; 
		iMin = 0; 
		iSeconds = 0;
	}
}


bool TimeOfDay::isEqual(TimeOfDay other)
{
	if (iHours == other.iHours && iMin == other.iMin && iSeconds == other.iSeconds)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool TimeOfDay::isLessthan(TimeOfDay other)
{
	if ((iHours < other.iHours) || (iHours == other.iHours && iMin < other.iMin) || (iHours == other.iHours && iMin == other.iMin && iSeconds < other.iSeconds))
	{
		return true;
	}
	else
	{
		return false;
	}
}