
#include "Pet.h"
using namespace std;

Pet::Pet() : name(" ")
{ }

void Pet::printDescription()
{
	cout << name;
}

void Pet::setName(string nameIn)
{
	name = nameIn;
}

string Pet::getName()
{
	return name;
}