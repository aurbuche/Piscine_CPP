#include "Peon.hpp"

Peon::Peon(void){
	std::cout << "Zog Zog." << std::endl;
}

Peon::Peon(std::string name): Victim(name){
	std::cout << "Zog Zog." << std::endl;
}

Peon::Peon(const Peon &rhs){
	*this = rhs;
}

Peon::~Peon(void){
	std::cout << "Bleuark..." << std::endl;
}

Peon				&Peon::operator=(const Peon &rhs)
{
	(void)rhs;
	return (*this);
}

void			Peon::getPolymorphed() const {
	std::cout << getName() << " has turned into a pink pony!" << std::endl;
}
