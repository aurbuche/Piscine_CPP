#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) : _name("default"), _title("default")
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string const name, std::string const title): _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &rhs)
{
	*this = rhs;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer			&Sorcerer::operator=(const Sorcerer &rhs) {
	this->_name = rhs._name;
	this->_title = rhs._title;
	return (*this);
}

void	Sorcerer::setName(std::string const name) {
	_name = name;
}

std::string	Sorcerer::getName(void) const {
	return _name;
}

void	Sorcerer::setTitle(std::string const title) {
	_title = title;
}

std::string	Sorcerer::getTitle(void) const {
	return _title;
}

void	Sorcerer::polymorph(Victim const &victim) const {
	victim.getPolymorphed();
}

void	Sorcerer::polymorph(const Peon &peon) const {
	peon.getPolymorphed();
}

std::ostream &	operator<<(std::ostream & o, Sorcerer const & sorcerer){
	o << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}
