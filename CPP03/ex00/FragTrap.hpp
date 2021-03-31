#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap {
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
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &copy);
	~FragTrap();
	FragTrap& operator=(FragTrap& assigned);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
};

#endif
