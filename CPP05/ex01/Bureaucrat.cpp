#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade) : m_Name(name), m_Grade(grade)
{
	if (grade < 1)
		Bureaucrat::GradeTooHighExceptions();
	if (grade > 150)
		Bureaucrat::GradeTooLowExceptions();
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

unsigned int		Bureaucrat::getGrade(void) const
{
	return (m_Grade);
}

void				Bureaucrat::incrementation(){
	if ((m_Grade - 1) >= 1)
		m_Grade -= 1;
	else
		throw Bureaucrat::GradeTooHighExceptions();
}

void 				Bureaucrat::decrementation(){
	if ((m_Grade + 1) <= 150)
		m_Grade += 1;
	else
		throw Bureaucrat::GradeTooLowExceptions();
}

void				Bureaucrat::signForm(Form &form)
{
	if (form.getSigned() == 1)
		std::cout << m_Name << " cant sign, " << form.getName() << " because it is already signed!\n";
	else
	{
		if (form.getSignGrade() < m_Grade)
			throw Bureaucrat::GradeTooLowExceptions();
		else
		{
			form.setSigned(1);
			std::cout<< m_Name << " signs " << form.getName()<< std::endl;
		}
	}
}

std::ostream&      operator<<(std::ostream& os, Bureaucrat const& f)
{
	os << "<" << f.getName() << ">, bureaucrat grade <" << f.getGrade()<<">\n";
	return (os);
}
