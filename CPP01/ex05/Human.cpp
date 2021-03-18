#include "Human.hpp"

Human::Human()
{
	std::cout << "The Human is create!" << std::endl;
}

Human::~Human()
{
	std::cout << "Good bye little Human. Little angel left too early!" << std::endl;
}

const void* Human::identify() const {
	return brain.identify();
}


