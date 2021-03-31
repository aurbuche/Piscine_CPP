#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class ScavTrap {
private:
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
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &copy);
	~ScavTrap();
	ScavTrap& operator=(ScavTrap& assigned);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const & target);
};

#endif