#pragma once

#include "quadruped.h"
#include <iostream>


class Cat : public Quadruped
{
public:
	void meow();
	void speak();
};
