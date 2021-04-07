#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"

int main(void)
{
	ICharacter* a = new Character;
	ICharacter* b = new Character;
	AMateria* mat = NULL;

	a->equip(mat);
	std::cout << "Hello my name is " << a->getName();
	std::cout << "Hello my name is " << a->getName() << std::endl;
	a->use(0, *b);
	return 0;
}