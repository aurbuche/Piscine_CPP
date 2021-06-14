#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <algorithm>

template <typename T>
typename T::iterator	easyfind(T &container, int n)
{
	typename	T::iterator findNumber;

	findNumber = std::find(container.begin(), container.end(), n);
	if (findNumber == container.end())
		throw std::exception();
	return findNumber;
}

#endif