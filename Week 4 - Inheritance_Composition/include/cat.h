#ifndef CAT_H
#define CAT_H

#include "quadruped.h"
#include <iostream>


class Cat : public Quadruped
{
public:
	void meow();
};

#endif // CAT_H