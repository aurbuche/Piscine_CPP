#include "Squad.hpp"

Squad::Squad(void) : m_count(0)
{
}

Squad::Squad(const Squad &rhs)
{
	*this = rhs;
}

Squad::~Squad(void)
{
}

Squad		&Squad::operator=(const Squad &rhs)
{
	(void)rhs;
	return (*this);
}

int			Squad::getcount() const {
	return m_count;
}

ISpaceMarine*	Squad::getUnit(int) const {

}
