#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include <fstream>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer
{
	public:
		Sorcerer(void);
		Sorcerer(std::string const name, std::string const title);
		Sorcerer(const Sorcerer &rhs);
		~Sorcerer(void);
		Sorcerer			&operator=(const Sorcerer &rhs);

//		GETTER // SETTER
		void setName(std::string const name);
		std::string getName(void) const;
		void setTitle(std::string const title);
		std::string getTitle(void) const;
		void polymorph(Victim const &victim) const;
		void polymorph(Peon const &peon) const;

	private:
		std::string _name;
		std::string _title;
};
std::ostream &	operator<<(std::ostream & o, Sorcerer const & sorcerer);

#endif