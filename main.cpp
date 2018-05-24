#include "Bird.h"
#include "Cat.h"
#include "Dog.h"
#include "Pet.h"
using namespace std;

int main()
{
	Bird tweety("Tweety", true);
	Cat sylv("Sylvester", true);
	Dog krypto("Krypto", false);
	tweety.printDescription();
	sylv.printDescription();
	krypto.printDescription();
	system("pause");
}