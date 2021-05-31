#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : m_signGrade(0), m_execGrade(0), m_action(0)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs)
{
	*this = rhs;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm			&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	this->m_signGrade = rhs.m_signGrade;
	this->m_execGrade = rhs.m_execGrade;
	this->m_action = rhs.m_action;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

int					RobotomyRequestForm::getsignGrade(void) const
{
	return (m_signGrade);
}

void				RobotomyRequestForm::setsignGrade(int const value)
{
	m_signGrade = value;
}

int					RobotomyRequestForm::getexecGrade(void) const
{
	return (m_execGrade);
}
