#include "Bird.h"
using namespace std;

Bird::Bird()
{
	setName(" ");
	talks = false;
}

Bird::Bird(string nameIn, bool t)
{
	setName(nameIn);
	talks = t;
}

void Bird::printDescription()
{
	cout << "Bird named: ";
	Pet::printDescription();
	if (talks)
		cout << " talks." << endl;
	else
		cout << " does not talk." << endl;

}