#include "Dog.h"
using namespace std;

Dog::Dog()
{
	setName(" ");
	neuterSpayed = false;
}

Dog::Dog(string name, bool nS)
{
	setName(name);
	neuterSpayed = nS;
}

void Dog::printDescription()
{
	cout << "Dog named: ";
	Pet::printDescription();
	if (neuterSpayed)
		cout << " is neutered" << endl;
	else
		cout << " is not neutered" << endl;
}