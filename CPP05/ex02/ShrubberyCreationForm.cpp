#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): Form("ShrubberyCreationForm", 145, 137), m_target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs)
{
	*this = rhs;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm			&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs): Form(rhs), m_target(rhs.m_target)
{
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/

unsigned int		ShrubberyCreationForm::getsignGrade(void) const
{
	return (m_signGrade);
}

void				ShrubberyCreationForm::setsignGrade(unsigned int value)
{
	m_signGrade = value;
}

unsigned int		ShrubberyCreationForm::getexecGrade(void) const
{
	return (m_execGrade);
}

void				ShrubberyCreationForm::setexecGrade(unsigned int value)
{
	m_execGrade = value;
}

void				ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	if (this->getSigned() == 0)
		std::cout << getName() << " isn't signed! Need to be signed to be execute.\n";
	else if (this->getexecGrade() < executor.getGrade())
		std::cout << executor.getName() << " can't sign because of his grade is to low!\n";
	else
	{
		std::ofstream TreeFile;
		TreeFile.open(this->m_target + "_shrubbery");
		TreeFile <<
				 ".    .     .  .      +     .      .          .\n"
				 ".            .      .    #       .           .\n"
				 ".           .           ###            .      .      .\n"
				 ".           .   \"#:. .:##\"##:. .:#\"  .      \n"
				 ".            .    \"####\"###\"####\"  .\n"
				 ".           \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
				 ".              \"#########\"#########\"        .        .\n"
				 ".           \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
				 ".         .  \"#######\"\"##\"##\"\"#######\"                  .\n"
				 ".               \"##\"#####\"#####\"##\"           .      .\n"
				 ".      \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
				 ".          \"#######\"##\"#####\"##\"#######\"      .     .\n"
				 ".     .       \"#####\"\"#######\"\"#####\"    .      .\n"
				 ".      \"                000      \"    .     .\n"
				 ".          .   .        000     .        .       .\n"
				 ".. .. .................O000O........................ ...... ...\n";
	}
}
