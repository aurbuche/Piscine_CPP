#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	std::cout << name << "initialized..." << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
	: name(name)
{
	std::cout << name << "initialized..." << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Destruction of " << name << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap &copy)
	:ClapTrap(60, 60, 120, 120, 1, "Ninja", 60, 5, 0)
{
	*this = copy;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap &assigned) {
	HitPoints = copy.HitPoints;
	MaxHitPoints = copy.MaxHitPoints;
	EnergyPoint = copy.EnergyPoint;
	MaxEnergyPoints = copy.MaxEnergyPoints;
	Level = copy.Level;
	name = copy.name;
	MeleeAttackDamage = copy.MeleeAttackDamage;
	RangedAttackDamage = copy.RangedAttackDamage;
	ArmorDamageReduction = copy.ArmorDamageReduction;
	return *this
}
