#ifndef DOG_H
#define DOG_H

#include "quadruped.h"
#include <iostream>

class Dog : public Quadruped
{
public: 
	void bark();
};

#endif // DOG_H