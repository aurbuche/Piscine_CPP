#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
private:

protected:
	int HitPoints;
	int MaxHitPoints;
	int EnergyPoint;
	int MaxEnergyPoints;
	int Level;
	std::string name;
	int MeleeAttackDamage;
	int RangedAttackDamage;
	int ArmorDamageReduction;

public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(ClapTrap const &copy);
	ClapTrap& operator=(ClapTrap &assigned);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif