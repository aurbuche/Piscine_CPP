#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostrea>
# include "AMateria.hpp"

class Character
{
	public:
		Character(void);
		Character(const Character &rhs);
		~Character(void);
		Character			&operator=(const Character &rhs);

//		GETTER // SETTER

		AMateria			getInventory(void) const;
		void				setInventory(AMateria const value);
		std::strig			getName(void) const;
		void				setName(std::strig const value);

	private:
		AMateria			m_inventory[4];
		std::strig			m_name;
};

#endif