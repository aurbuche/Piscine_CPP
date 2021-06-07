#include "Victim.hpp"

Victim::Victim(std::string const name): m_name(name) {
	std::cout << "Some random victim called " << m_name << " just appeared" << std::endl;
}

Victim::Victim(const Victim &rhs) : m_name(rhs.m_name)
{
	*this = rhs;
}

Victim::~Victim(void){
	std::cout << "The victim " << m_name << " died for no apparent reasons!" << std::endl;
}

Victim				& Victim::operator=(const Victim &rhs)
{
	this->m_name = rhs.m_name;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

std::string			Victim::getName(void) const
{
	return (m_name);
}

void				Victim::setName(std::string const value)
{
	m_name = value;
}

void			Victim::getPolymorphed() const {
	std::cout << m_name << " has turned into a cute little sheep!" << std::endl;
}

std::ostream &	operator<<(std::ostream & o, Victim const & victim){
	o << "I\'m " << victim.getName() << " and I like otters!" << std::endl;
	return o;
}
