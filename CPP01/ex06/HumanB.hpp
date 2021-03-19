#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <cctype>
# include <iostream>
# include <cstring>
# include "Weapon.hpp"

class HumanB{
public:
	HumanB();
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon& weapon);
	Weapon getName(void);
	void attack();

private:
	std::string m_name;
	Weapon *m_weapon;
};

#endif