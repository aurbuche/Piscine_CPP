#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "The brain is create!" << std::endl;
	address = this;
}

Brain::~Brain()
{
	std::cout << "Good bye little brain. Little angel left too early!" << std::endl;
}

const void*	Brain::identify() const {
	return address;
}
