#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
	public:
		Peon(std::string name);
		Peon(const Peon &rhs);
		virtual ~Peon(void);
		Peon				&operator=(const Peon &rhs);
		void	getPolymorphed() const;

//		GETTER // SETTER


	private:
		Peon(void);
};

#endif