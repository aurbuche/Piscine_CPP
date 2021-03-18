#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "The brain is create!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Good bye little brain. Little angel left too early!";
}

std::string		Brain::identify() {
	std::string		address = this;
	return address;
}

void 	Brain::setIQ(int IQ)
{
	this->IQ = IQ;
}

int		Brain::getIQ(void)
{
	return (this->IQ);
}

void	Brain::setWeight(int weight)
{
	this->weight = weight;
}

int		Brain::getWeight(void)
{
	return (this->weight);
}
