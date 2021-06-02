 #include "Form.hpp"

Form::Form() : m_name("default"), m_signGrade(0), m_execGrade(0)
{
}

Form::Form(std::string const& Name, unsigned int Grade, unsigned int execGrade): m_name(Name), m_signed(0), m_signGrade(Grade), m_execGrade(execGrade)
{
	if (Grade < 1)
		throw Form::GradeTooHighExceptions();
	else if (Grade > 150)
		throw Form::GradeTooLowExceptions();
}

Form::Form(Form &rhs): m_name(rhs.m_name), m_signGrade(rhs.m_signGrade), m_execGrade(rhs.m_execGrade)
{
	*this = rhs;
}

Form::~Form(void)
{
}

Form				&Form::operator=(const Form &rhs)
{
	this->m_signed = rhs.m_signed;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

unsigned int		Form::getSignGrade() const
{
	return (m_signGrade);
}

unsigned int		Form::getExecGrade() const
{
	return (m_execGrade);
}

std::string			Form::getName(void) const
{
	return (m_name);
}

bool				Form::getSigned(void) const
{
	return (m_signed);
}

void				Form::setSigned()
{
	m_signed = 1;
}


void Form::beSigned(const Bureaucrat &target) {
	if (this->m_signed)
	{
		std::cout << "Form already signed." << std::endl;
		return;
	}
	if (target.getGrade() > this->m_signGrade)
		throw Form::GradeTooLowExceptions();
	else
	{
		std::cout << target.getName() << " signed form " << this->m_name << std::endl;
		this->setSigned();
	}
	return;
}


std::ostream&      operator<<(std::ostream& os, Form const& f)
{
	os <<"Form name : "<< f.getName() << " | Form grade required : "<< f.getSignGrade()<< " | Form is signed : "<< f.getSigned()<< std::endl;
	return (os);
}
