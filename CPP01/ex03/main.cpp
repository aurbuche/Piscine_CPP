#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int	main()
{
	ZombieHorde* test = new ZombieHorde(12);
	test->announce();
	delete test;
}