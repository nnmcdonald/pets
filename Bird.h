#ifndef BIRD_H
#define BIRD_H
#pragma once
#include "Pet.h"
using namespace std;

class Bird : public Pet
{
public:
	Bird();
	Bird(string name, bool talks);
	bool talks;
	void printDescription();
};
#endif