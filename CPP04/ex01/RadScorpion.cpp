#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void)
{
	std::cout << "* click click click *" << std::endl;
	m_hp = 80;
	m_type = "RadScorpion";
}

RadScorpion::RadScorpion(const RadScorpion &rhs)
{
	*this = rhs;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion			&RadScorpion::operator=(const RadScorpion &rhs)
{
	(void)rhs;
	return (*this);
}
