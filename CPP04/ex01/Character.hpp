#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:
		Character(void);
		Character(const Character &rhs);
		Character(std::string const & name);
		~Character(void);
		Character			&operator=(const Character &rhs);

//		GETTER // SETTER

		std::string			getName(void) const;
		void				setName(std::string const value);
		int					getAP(void) const;
		void				setAP(int const value);
		AWeapon	const		*getWeapon(void) const;
		void				setWeapon(AWeapon const *value);
		void				recoverAP();
		void				equip(AWeapon *weapon);
		void				attack(Enemy *enemy);

	private:
		std::string			m_name;
		int					m_AP;
		AWeapon	const		*m_weapon;
};
std::ostream & operator<<(std::ostream & o, Character const & rhs);

#endif