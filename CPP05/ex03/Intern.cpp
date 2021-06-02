#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern(void)
{
}

Intern::Intern(const Intern &rhs)
{
	*this = rhs;
}

Intern::~Intern(void)
{
}

Intern				&Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

Form				*makeShrubberyForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form				*makePresidentPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form				*makeRobotomyForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form				*Intern::makeForm(std::string nameForm, std::string targetForm)
{
	if (nameForm != "shrubbery request" && nameForm != "presidential request" && nameForm != "robotomy request")
		throw FormDontExistException();
	std::string requestForm[3] = {
			"shrubbery request",
			"presidential request",
			"robotomy request"
	};
	Form *(*make[3])(std::string) = {
			makeShrubberyForm,
			makePresidentPardonForm,
			makeRobotomyForm
	};
	for (int i = 0; i < 3; i++) {
		if (requestForm[i] == nameForm) {
			std::cout << "Intern creates " << requestForm[i] << std::endl;
			return (make[i](targetForm));
		}
	}
	return (NULL);
}
