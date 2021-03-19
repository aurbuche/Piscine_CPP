#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <cctype>
# include <iostream>
# include <cstring>

class Weapon {
public:
	Weapon(std::string type);
	Weapon();
	~Weapon();
	void setType(std::string type);
	std::string& getType(void);

private:
	std::string m_type;
};

#endif