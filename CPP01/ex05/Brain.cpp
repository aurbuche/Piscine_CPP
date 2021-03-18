#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "The brain is create!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Good bye little brain. Little angel left too early!" << std::endl;
}

const void*	Brain::identify() const {
	address = this;
	return address;
}
