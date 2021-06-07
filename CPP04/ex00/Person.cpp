#include "Person.hpp"

Person::Person(std::string name) : Victim(name) {
	std::cout << "Hello!" << std::endl;

	return;
}

Person::Person(const Person &copy) : Victim(copy) {
	return;
}

Person::~Person() {
	std::cout << "Ouargl..." << std::endl;

	return;
}

Person & Person::operator=(const Person &rhs) {
	(void)rhs;
	return (*this);
}

void	Person::getPolymorph() const {
	std::cout << getName() << " has been turned into a frog!" << std::endl;

	return;
}
