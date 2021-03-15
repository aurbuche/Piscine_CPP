#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int i = 1; i < ac; i++)
		{
			std::string str = av[i];
			for (size_t j = 0; j < str.length(); j++)
				putchar(std::toupper(str[j]));
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}