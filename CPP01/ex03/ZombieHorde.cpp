#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n) :size(n)
{
	std::cout << "Horde in creation..." << std::endl;
	this->Horde = new Zombie[size];
}

ZombieHorde::~ZombieHorde(void)
{
	std::cout << "The horde is on the run!" << std::endl;
	delete [] this->Horde;
}

void		ZombieHorde::announce(void) const
{
	int     i = 0;

	while (i < size)
	{
		Horde[i].announceZombie();
		i++;
	}
}