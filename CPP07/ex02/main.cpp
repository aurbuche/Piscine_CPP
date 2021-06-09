#include "Array.hpp"

int main(void)
{
	Array<std::string> test1(2);
	Array<std::string> test2(test1);

	std::string const str = "salut\n";
	test1[0] = str;
	test2[0] = "pouet pouet\n";
	try
	{
		std::cout << test1[0] << test1.size() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Index out of range\n";
	}
	try
	{
		std::cout << test2[0] << test2.size() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Index out of range\n";
	}
	return (0);
}