#ifndef DOG_H
#define DOG_H
#pragma once
#include "Pet.h"
//#include "Pet.h"
using namespace std;

class Dog : public Pet
{
public:
	Dog();
	Dog(string name, bool neuterSpayed);
	bool neuterSpayed;
	void printDescription();
};
#endif