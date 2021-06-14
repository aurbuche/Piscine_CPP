#include "Array.hpp"

int main(void)
{
	Array<std::string> test1(2);

	std::string const str = "salut\n";
	test1[0] = str;
	test1[1] = "pouet pouet\n";
	Array<std::string> test2(test1);
	Array<std::string> test3;
	test3 = test2;
	try
	{
		std::cout << test1[0] << test1[1] << test1.size() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Index out of range\n";
	}
	try
	{
		std::cout << "\nCopy\n" << test2[0] << test2[1] << test2.size() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Index out of range\n";
	}
	try
	{
		std::cout << "\nOperator \'=\'\n" << test3[0] << test2[1] << test3.size() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Index out of range\n";
	}
	return (0);
}