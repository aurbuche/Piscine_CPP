#include "Span.hpp"

Span::Span(unsigned int n): m_n(n)
{
	m_tab.reserve(n);
	m_n = n;
}

Span::Span(const Span &rhs)
{
	*this = rhs;
}

Span::~Span(void)
{}

Span				&Span::operator=(const Span &rhs)
{
	this->m_n = rhs.m_n;
	return (*this);
}

void				Span::addNumber(int n)
{
	if (m_tab.size() == m_tab.capacity())
		throw CapacityException();
	m_tab.push_back(n);
}

void				Span::addMoreNumber(std::vector<int> begin, std::vector<int> end)
{
	if (end - begin <= m_n)
	{}
	else
}

int					Span::longestSpan()
{
	if (m_tab.empty())
		throw NotEnoughNbException();
	return (*max_element(m_tab.begin(), m_tab.end()) - *min_element(m_tab.begin(), m_tab.end()));
}

int					Span::shortestSpan()
{
	if (m_tab.empty())
		throw NotEnoughNbException();
	int	diff = INT_MAX;
	for (unsigned long i = 0; i < m_tab.size() - 1;i++)
	{
		for (unsigned long j = i+1; j < m_tab.size(); j++)
		{
			if (abs(m_tab[i] - m_tab[j]) < diff)
				diff = abs(m_tab[i] - m_tab[j]);
		}
	}
	return (diff);
}