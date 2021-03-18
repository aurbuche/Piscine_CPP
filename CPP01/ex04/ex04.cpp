#include <cctype>
#include <iostream>
#include <cstring>

int		main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string *ptr = &string;
	std::string &ref = string;

	std::cout << "String = " << string << std::endl;
	std::cout << "Pointer = " << *ptr << std::endl;
	std::cout << "Reference = " << ref << std::endl;
	return 0;
}
