#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void		ZombieEvent::setZombieType(std::string type)
{
	ZombieType = type;
	std::cout << "My new type is: " << ZombieType << std::endl;
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie* zombie = new Zombie(name, ZombieType);
	return (zombie);
};

Zombie*		ZombieEvent::randomChump()
{
	std::string name[10] = {"Zack", "Edouard", "Pierre", "Sylvain", "Philippe", "Olivier", "Patrick", "Xavier", "Thomas", "Aurelien"};

	int randindex = rand() % 10;
	std::string zname = name[randindex];
	Zombie* zombie = new Zombie(zname, ZombieType);
	return zombie;
}
