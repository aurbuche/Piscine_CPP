#include "Pony.hpp"

Pony::Pony(std::string name, std::string colour, std::string height)
	: name(name), colour(colour), height(height)
{
	std::cout << "Pony create!\n";
}

Pony::~Pony()
{
	std::cout << name << " just died" << std::endl;
}

void	Pony::print_data()
{
	std::cout << "Hello my name is " << name;
	std::cout << ", my colour is " << colour;
	std::cout << ", and I am " << height  << std::endl;
}
