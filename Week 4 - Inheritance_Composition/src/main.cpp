#include <iostream>
#include "cat.h"
#include "dog.h"

using namespace std;

int main()
{
    Dog scooby;
    Cat garfield;

    scooby.raiseLeg(2);
    garfield.raiseLeg(0);

    cout << "Scooby said: ";
    scooby.bark();
    cout << "Garfield said: ";
    garfield.meow();

    system("PAUSE");
    return 0;
}
