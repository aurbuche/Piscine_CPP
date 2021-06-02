#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target): Form("RobotomyRequestForm", 72, 45), m_target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &rhs)
{
	*this = rhs;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm			&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	m_target = rhs.m_target;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

unsigned int		RobotomyRequestForm::getsignGrade(void) const
{
	return (m_signGrade);
}

void				RobotomyRequestForm::setsignGrade(unsigned int value)
{
	m_signGrade = value;
}

unsigned int		RobotomyRequestForm::getexecGrade(void) const
{
	return (m_execGrade);
}

void				RobotomyRequestForm::setexecGrade(unsigned int value)
{
	m_execGrade = value;
}

void                RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	int irand = rand() % 2;
	if (m_signed == 1)
	{
		if (executor.getGrade() < m_execGrade)
		{
			if (irand == 0)
				std::cout << m_target << " has been robotomized successfully!\n";
			else
				std::cout << "Fail: " << m_target << " has not been robotomized!\n";
		}
		else
		{
			throw Bureaucrat::GradeTooLowExceptions();
		}
	}
	else
		throw Form::FormIsNotSigned();
}
