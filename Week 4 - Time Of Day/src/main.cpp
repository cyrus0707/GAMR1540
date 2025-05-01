#include <iostream>
#include "timeOfDay.h"

int main()
{
	TimeOfDay midnight;
	TimeOfDay clockShopTime(23, 59, 30);


	if (midnight.isLessthan(clockShopTime))
	{
		cout << midnight.toString() << " is less than " << clockShopTime.toString() << endl;
	}
	else
	{
		cout << clockShopTime.toString() << "is less than" << midnight.toString() << endl;
	}

	system("pause");

	/*TimeOfDay tickingClock(00, 00, 01);

	do {
		cout << tickingClock.toString() << endl;
		tickingClock.increment();

	}while (!tickingClock.isEqual(midnight));

	system("pause");*/

	return 0;
}

