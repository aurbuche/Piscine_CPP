#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

	try
	{
		Bureaucrat tmp1("tups1", 2);
		Bureaucrat tmp2("tups2", 140);
		Form        forming("contrat", 15);
		Form        fromat("test", 25);

		std::cout<<tmp1;
		tmp1.incrementation();
		std::cout<<tmp1;
		std::cout<<tmp2;
		tmp2.decrementation();
		std::cout<<tmp2;

		std::cout<<fromat;
		tmp1.signForm(fromat);
		tmp1.signForm(forming);
		tmp2.signForm(fromat);
		std::cout<<fromat;
	}
	catch(const Bureaucrat::GradeTooLowExceptions& e)
	{
		std::cout<< e.what() << std::endl;
		return (1);
	}
	catch(const Bureaucrat::GradeTooHighExceptions& e)
	{
		std::cout<< e.what() << std::endl;
		return (1);
	}
	catch(const Form::GradeTooLowExceptions& e)
	{
		std::cout<< e.what() << std::endl;
		return (1);
	}
	catch(const Form::GradeTooHighExceptions& e)
	{
		std::cout<< e.what() << std::endl;
		return (1);
	}
}
