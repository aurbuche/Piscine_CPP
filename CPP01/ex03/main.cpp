#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
	ZombieHorde *horde = new ZombieHorde(5);
	horde->announce();
	delete horde;
	return 0;
}