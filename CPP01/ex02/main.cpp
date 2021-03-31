#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main()
{
	ZombieEvent zombie_event;
	Zombie *zombie;
	srand(time(NULL));

	zombie = new Zombie("Zack", "normal");
	zombie->announce();
	delete zombie;

	zombie_event.setZombieType("weak");
	zombie = zombie_event.newZombie("Francis");
	zombie->announce();
	delete zombie;

	zombie_event.setZombieType("Rocket");
	zombie = zombie_event.randomChump();
	zombie->announce();
	delete zombie;

	return 0;
}