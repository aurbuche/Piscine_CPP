#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie		*zombie;
	ZombieEvent zombieevent;

	zombie = new Zombie("Carl", "strong");
	zombie->announce();
	delete zombie;

	zombieevent.setZombieType("weak");
	zombie = zombieevent.newZombie("Bob");
	zombie->announce();
	delete zombie;
	return 0;
}
