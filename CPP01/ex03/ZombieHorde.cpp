#include "ZombieHorde.hpp"

Zombie*		ZombieHorde::randomChump()
{
	std::string name[10] = {"Zack", "Edouard", "Pierre", "Sylvain", "Philippe", "Olivier", "Patrick", "Xavier", "Thomas", "Aurelien"};

	int randindex = rand() % 10;
	std::string zname = name[randindex];
	Zombie zombie = Zombie(name, "unknown");
	return zombie;
}

ZombieHorde::ZombieHorde(int n)
{
	int irand;
	int     i;
	Horde = new Zombie[n];
	i = -1;
	srand (time(NULL));
	size = n;
	while (++i < n)
	{
		irand = rand() % 10;
		Horde[i] = randomChump(irand);
		Horde[i].announceZombie();
	}
}

ZombieHorde::~ZombieHorde()
{
	delete Horde[];
	std::cout << "The horde is on the run!" << std::endl;
}

void		announce()
{
	int     i;

	i = 0;
	while (i < n)
	{
		Horde[i].announceZombie();
		i++;
	}
}