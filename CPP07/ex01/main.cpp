#include "iter.hpp"

template <typename T>
void	print(T const & src)
{
	std::cout << src;
}

int main(void)
{
	std::string	str[] = {"Salut ", "petite ", "perruche."};
	int tab_num[] = {0, 1, 2, 3, 4, 5};

	::iter(tab_num, 6, print);
	std::cout << std::endl;
	::iter(str, 3, print);
	std::cout << std::endl;
	return (0);
}
