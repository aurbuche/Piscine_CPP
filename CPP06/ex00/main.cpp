#include <iostream>
#include <string>
#include <limits.h>
#include <ios>
#include <iomanip>
#include "math.h"

int				print_nan(void)
{
	std::cout << "char\t: " << "impossible" << std::endl
			  << "int\t: " << "impossible" << std::endl
			  << "float\t: " << "nanf" << std::endl
			  << "double\t: " << "nan" << std::endl;
	return 0;
}

int				print_inf(int sign)
{
	std::cout << "char\t: " << "impossible" << std::endl
			  << "int\t: " << "impossible" << std::endl
			  << "float\t: " << (sign == 0 ? "-" : "+") << "inff" << std::endl
			  << "double\t: " << (sign == 0 ? "-" : "+") << "inf" << std::endl;
	return 0;
}

int 			set_accu(char *str, int k)
{
	int		accu = 0;
	while (str[k] && str[k] != '.')
		k++;
	if (str[k] == '.')
		k++;
	while (str[k + accu] && isdigit(str[k + accu]))
		accu++;
	if (accu > 6)
		accu = 6;
	if (accu == 0)
		accu = 1;
	return (accu);
}

int				main(int ac, char **av)
{
	std::string		str;
	double			d = 0.0;
	int				accu = 0;
	if (ac != 2)
	{
		std::cout << "Error argument.\n";
		return (0);
	}
	str = av[1];
	d = std::atof(str.c_str());
	accu = set_accu(av[1], 0);
	for (int i = 0; str[i]; i++)
		str[i] = tolower(str[i]);
	if (str == "nan")
		return (print_nan());
	if (str == "+inf" || str == "+inff")
		return (print_inf(1));
	if (str == "-inf" || str == "-inff")
		return (print_inf(0));
	if (d < CHAR_MIN || CHAR_MAX < d)
		std::cout << "char: impossible\n";
	else if(std::isprint(d) == 1)
		std::cout << "char: "<< static_cast<char>(d) << "\n";
	else
		std::cout << "char: Non displayable\n";
	if (INT_MIN < d && d < INT_MAX)
		std::cout << "int: " << static_cast<int>(d) <<"\n";
	else
		std::cout << "int: impossible\n";
	std::cout << std::setprecision(accu) << std::fixed << "float: " << static_cast<float>(d) <<"f\n";
	std::cout << std::setprecision(accu) << std::fixed << "double: " << d <<"\n";
}