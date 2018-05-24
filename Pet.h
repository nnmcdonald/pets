#pragma once
#include <string>
#include <iostream>
using namespace std;

class Pet
{
public:
	Pet();
	void printDescription();
	void setName(string nameIn);
	string getName();
private:
	string name;
};