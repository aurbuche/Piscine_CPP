#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <cctype>
# include <iostream>
# include <cstring>

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name, std::string type);
		~Zombie();

		std::string			getname(void);
		void				setname(std::string name);
		std::string			gettype(void);
		void				settype(std::string type);
		void				announceZombie();

	private:
		std::string type;
		std::string name;
};

#endif