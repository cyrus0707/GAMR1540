#include<string>

using namespace std;

class TimeOfDay
{
private:
	int iHours;
	int iMin;
	int iSeconds;
public:
	TimeOfDay();
	TimeOfDay(int iH, int iM, int iS);
	void increment();
	string toString();
	bool isEqual(TimeOfDay other);
	bool isLessthan(TimeOfDay other);

};

