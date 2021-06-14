#include "easyfind.hpp"

int 	main(void)
{
	int	find = 59;
	int	find1 = 63;
	std::list<int> lst;
	lst.push_back(9);
	lst.push_back(48);
	lst.push_back(63);
	lst.push_back(5);
	try
	{
		easyfind<std::list<int> > (lst, find);
		std::cout << "The occurence has been found!!" << std::endl;
	}
	catch (std::exception e)
	{
		std::cerr << "The number hasn\'t been found!\n";
	}
	try
	{
		easyfind<std::list<int> > (lst, find1);
		std::cout << "The occurence has been found!!" << std::endl;
	}
	catch (std::exception e)
	{
		std::cerr << "The number hasn\'t been found!\n";
	}
}