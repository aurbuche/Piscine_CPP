#include "Data.hpp"

Data::Data(void) : m_s1("none"), m_s2("none"), m_n(0)
{
}

Data::Data(const Data &rhs)
{
	*this = rhs;
}

Data::~Data(void)
{
}

Data				&Data::operator=(const Data &rhs)
{
	this->m_s1 = rhs.m_s1;
	this->m_s2 = rhs.m_s2;
	this->m_n = rhs.m_n;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/
