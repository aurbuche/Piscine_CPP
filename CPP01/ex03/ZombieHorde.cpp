#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	int irand;
	Horde = new Zombie[n];

}

ZombieHorde::~ZombieHorde()
{
}

void		ZombieHorde::announce() {
	std::cout << getname() << "est " << gettype() << " dans la vie." << std::endl;
}

	/********************************

			GETTER // SETTER

	********************************/

std::string			ZombieHorde::getname(void)
{
	return (z_name);
}

void				ZombieHorde::setname(std::string name)
{
	z_name = name;
}

std::string			ZombieHorde::gettype(void)
{
	return (z_type);
}

void				ZombieHorde::settype(std::string type)
{
	z_type = type;
}
