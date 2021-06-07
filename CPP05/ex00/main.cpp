#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat tmp1("tups", 2);
		Bureaucrat tmp("tups1", 7);
		Bureaucrat tmp2("tups2", 149);
		Bureaucrat tmp3("tups3", 140);
		tmp.incrementation();
		tmp3.decrementation();
		std::cout<<tmp;
		tmp.decrementation();
		std::cout<<tmp;
		tmp2.decrementation();
		std::cout<<tmp2;
	}
	catch(const Bureaucrat::GradeTooLowExceptions& e)
	{
		std::cout<< e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighExceptions& e)
	{
		std::cout<< e.what() << std::endl;
	}
}