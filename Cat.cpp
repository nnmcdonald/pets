#include "Cat.h"
using namespace std;

Cat::Cat()
{
	setName(" ");
	neuterSpayed = false;
}

Cat::Cat(string name, bool nS)
{
	setName(name);
	neuterSpayed = nS;
}

void Cat::printDescription()
{
	cout << "Cat named: ";
	Pet::printDescription();
	if (neuterSpayed)
		cout << " is neutered" << endl;
	else
		cout << " is not neutered" << endl;
}