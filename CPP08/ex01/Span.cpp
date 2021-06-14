#include "Span.hpp"

Span::Span(void) : m_N(0)
{
}

Span::Span(const Span &rhs)
{
	*this = rhs;
}

Span::~Span(void)
{
}

Span				&Span::operator=(const Span &rhs)
{
	this->m_N = rhs.m_N;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

int					Span::getN(void) const
{
	return (m_N);
}

void				Span::setN(int const value)
{
	m_N = value;
}
