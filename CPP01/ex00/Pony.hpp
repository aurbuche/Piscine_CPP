#ifndef PONY_HPP
# define PONY_HPP

# include <cctype>
# include <iostream>
# include <cstring>
# include <cstdio>

class	Pony{
private:
	std::string name;
	std::string	colour;
	std::string	height;

public:
	Pony(std::string name, std::string colour, std::string height);
	~Pony();
	void	print_data();
};

#endif
