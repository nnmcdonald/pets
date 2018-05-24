#ifndef CAT_H
#define CAT_H
#pragma once
#include "Pet.h"
using namespace std;

class Cat : public Pet
{
public:
	Cat();
	Cat(string name, bool neuterSpayed);
	bool neuterSpayed;
	void printDescription();
};
#endif