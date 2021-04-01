#include "ISquad.hpp"

ISquad::ISquad(void) : m_count(0), m_unit(0), m_unit(0)
{
}

ISquad::ISquad(const ISquad &rhs)
{
	*this = rhs;
}

ISquad::~ISquad(void)
{
}

ISquad				&ISquad::operator=(const ISquad &rhs)
{
	this->m_count = rhs.m_count;
	this->m_unit = rhs.m_unit;
	this->m_unit = rhs.m_unit;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

int					ISquad::getcount(void) const
{
	return (m_count);
}

void				ISquad::setcount(int const value)
{
	m_count = value;
}

int					ISquad::getunit(void) const
{
	return (m_unit);
}

void				ISquad::setunit(int const value)
{
	m_unit = value;
}

ISpaceMarine*			ISquad::getunit(void) const
{
	return (m_unit);
}

void				ISquad::setunit(ISpaceMarine* const value)
{
	m_unit = value;
}
