#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void): ClapTrap("Default", 100, 100, 120, 120, 60, 20, 5), FragTrap("default"),NinjaTrap("default")
{
	std::cout << " is create!" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap("default", 0, 0, 0, 0, 0, 0, 0), FragTrap(name), NinjaTrap(name)
{
	setAtt(name);
	std::cout << "Creation supertrap..." << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &rhs): ClapTrap("Default", 0, 0, 0, 0, 0, 0, 0), FragTrap("empty"),NinjaTrap("n_name")
{
	*this = rhs;
	std::cout << " is copy!" << std::endl;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << name << " is delete!" << std::endl;
}

SuperTrap			&SuperTrap::operator=(const SuperTrap &rhs)
{
	(void)rhs;
	return (*this);
}

void	SuperTrap::setAtt(std::string _name)
{
	HitPoints = 100;
	MaxHitPoints = 100;
	EnergyPoint = 120;
	MaxEnergyPoints = 120;
	Level = 1;
	name = _name;
	MeleeAttackDamage = 60;
	RangedAttackDamage = 20;
	ArmorDamageReduction = 5;
}

void	SuperTrap::meleeAttack(const std::string &target) {
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::rangedAttack(const std::string &target) {
	FragTrap::rangedAttack(target);
}
