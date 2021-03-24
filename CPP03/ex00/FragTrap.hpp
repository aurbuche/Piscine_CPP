#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>

class FragTrap {
private:
	int HitPoints;
	int MaxHitPoints;
	int EnergyPoint;
	int MaxEnergyPoint;
	int Level;
	std::string name; // = parameter of constructor
	int MeleeAttackDamage;
	int RangedAttackDamage;
	int ArmorDamageReduction;

protected:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap&);
	~FragTrap();
	FragTrap &operator=(const FragTrap &assigned);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
