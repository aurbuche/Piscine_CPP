#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	srand(time(NULL));
	try
	{
		Bureaucrat	lukas("Lukas", 42);
		Bureaucrat	aurelien("Aurelien", 2);
		Bureaucrat	patrick("Patrick", 118);

		RobotomyRequestForm		form1("Bender");
		PresidentialPardonForm	form2("Jean-Castex");
		ShrubberyCreationForm	form3("home");

		std::cout << lukas << aurelien << patrick;
		lukas.signForm(form1);
		aurelien.signForm(form2);
		patrick.signForm(form3);
		form1.execute(lukas);
		form2.execute(aurelien);
		form3.execute(patrick);
		lukas.executeForm(form1);
		aurelien.executeForm(form2);
		patrick.executeForm(form3);



	}
	catch (const Bureaucrat::GradeTooLowExceptions& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighExceptions& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowExceptions& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const Form::GradeTooHighExceptions& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
