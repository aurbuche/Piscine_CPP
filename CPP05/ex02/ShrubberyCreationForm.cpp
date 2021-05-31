#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : m_signGrade(0), m_execGrade(0), m_action(0)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs)
{
	*this = rhs;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm			&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	this->m_signGrade = rhs.m_signGrade;
	this->m_execGrade = rhs.m_execGrade;
	this->m_action = rhs.m_action;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

int					ShrubberyCreationForm::getsignGrade(void) const
{
	return (m_signGrade);
}

void				ShrubberyCreationForm::setsignGrade(int const value)
{
	m_signGrade = value;
}

int					ShrubberyCreationForm::getexecGrade(void) const
{
	return (m_execGrade);
}

void				ShrubberyCreationForm::setexecGrade(int const value)
{
	m_execGrade = value;
}
