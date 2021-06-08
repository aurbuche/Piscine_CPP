#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <typeinfo>
# include <string>
template <typename T, typename S>
void	iter(T *array, S length, void (*func)(T &))
{
	for (int i = 0; i < length; i++)
		func((array)[i]);
}

template <typename T, typename S>
void	iter(T const *array, S length, void (*func)(T const &))
{
	for (int i = 0; i < length; i++)
		func((array)[i]);
}

#endif