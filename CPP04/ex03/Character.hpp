#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "ICharacter.hpp"

class Character
{
	public:
		Character(void);
		Character(const Character &src);
		~Character(void);
		Character			&operator=(const Character &rhs);

//		GETTER // SETTER

//		AMateria			getInventory[4] (void) const;
//		void				setInventory[4] (AMateria const value);
		std::string			getName(void) const;
		void				setName(std::string const value);

	private:
		AMateria			_inventory[4];
		std::string			_name;
};

#endif