#include "Pony.hpp"

Pony::Pony(std::string name, std::string colour, std::string height)
{
	this->name = name;
	this->colour = colour;
	this->height = height;
}

Pony::~Pony()
{
	std::cout << "The little pony just died" << std::endl;
}

void	Pony::print_data()
{
	std::cout << "Hello my name is " << name;
	std::cout << ", my colour is " << colour;
	std::cout << ", and I am " << height  << std::endl;
}
