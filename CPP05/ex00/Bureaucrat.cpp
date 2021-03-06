#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade) : m_Name(name), m_Grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighExceptions();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowExceptions();
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
{
	*this = rhs;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat			&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->m_Grade = rhs.m_Grade;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

std::string	const	Bureaucrat::getName(void) const
{
	return (m_Name);
}

int					Bureaucrat::getGrade(void) const
{
	return (m_Grade);
}

void				Bureaucrat::incrementation(){
	if ((m_Grade - 1) > 1)
		m_Grade -= 1;
	else
		throw Bureaucrat::GradeTooHighExceptions();
}

void 				Bureaucrat::decrementation(){
	if ((m_Grade + 1) < 150)
		m_Grade += 1;
	else
		throw Bureaucrat::GradeTooLowExceptions();
}

std::ostream&      operator<<(std::ostream& os, Bureaucrat const& f)
{
	os << "<" << f.getName() << ">, bureaucrat grade <" << f.getGrade()<<">\n";
	return (os);
}
