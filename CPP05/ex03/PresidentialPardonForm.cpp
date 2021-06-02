#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 25, 5), m_target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &rhs)
{
	*this = rhs;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm			&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	m_target = rhs.m_target;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

unsigned int		PresidentialPardonForm::getsignGrade(void) const
{
	return (m_signGrade);
}

void				PresidentialPardonForm::setsignGrade(unsigned int value)
{
	m_signGrade = value;
}

unsigned int		PresidentialPardonForm::getexecGrade(void) const
{
	return (m_execGrade);
}

void				PresidentialPardonForm::setexecGrade(unsigned int value)
{
	m_execGrade = value;
}

void                PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (m_signed == 1)
	{
		if (executor.getGrade() < m_execGrade)
			std::cout << m_target << " has been pardoned by Zafod Beeblebrox\n";
		else
			throw Bureaucrat::GradeTooLowExceptions();
	}
	else
		throw Form::FormIsNotSigned();
}
