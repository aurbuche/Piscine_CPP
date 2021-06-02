#include "ShrubberyCreationForm.hpp"
//#include "PresidentialPardonForm.hpp"
//#include "RobotomyRequestForm.hpp"

int main()
{
	srand(time(NULL));
	try
	{
		Bureaucrat	gerard("Gerard", 46);
		Bureaucrat	didier("Didier", 149);
		Bureaucrat	ginette("Ginette", 2);

//		RobotomyRequestForm		form1("Stroheim");
//		PresidentialPardonForm	form2("Jean-Castex");
		ShrubberyCreationForm	form3("home");

		std::cout << gerard << didier << ginette;
		gerard.signForm(form3);
//		ginette.signForm(form2);
//		ginette.signForm(form1);
//		form1.execute(gerard);
//		form2.execute(gerard);
		form3.execute(didier);
//		gerard.executeForm(form3);
//		ginette.executeForm(form2);
//		ginette.executeForm(form1);



	}
	catch (const Bureaucrat::GradeTooLowExceptions& e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	catch (const Bureaucrat::GradeTooHighExceptions& e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	catch (const Form::GradeTooLowExceptions& e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	catch (const Form::GradeTooHighExceptions& e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}

	return (0);
}
