#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : m_signGrade(0), m_execGrade(0), m_action(0)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs)
{
	*this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm			&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	this->m_signGrade = rhs.m_signGrade;
	this->m_execGrade = rhs.m_execGrade;
	this->m_action = rhs.m_action;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

int					PresidentialPardonForm::getsignGrade(void) const
{
	return (m_signGrade);
}

void				PresidentialPardonForm::setsignGrade(int const value)
{
	m_signGrade = value;
}

int					PresidentialPardonForm::getexecGrade(void) const
{
	return (m_execGrade);
}

void				PresidentialPardonForm::setexecGrade(int const value)
{
	m_execGrade = value;
}
