#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
}

SuperTrap::SuperTrap(std::string n_name, int hp, int mhp, int mana, int mmana, int ad, int adr, int armor)
: HitPoints(hp), MaxHitPoints(mhp), EnergyPoint(mana), MaxEnergyPoints(mmana),Level(1), name(n_name),
	MeleeAttackDamage(ad), RangedAttackDamage(adr),	ArmorDamageReduction(armor)
{
}

SuperTrap::SuperTrap(const SuperTrap &rhs)
{
	*this = rhs;
}

SuperTrap::~SuperTrap(void)
{
}

SuperTrap			&SuperTrap::operator=(const SuperTrap &rhs)
{
	(void)rhs;
	return (*this);
}

	/********************************

			GETTER // SETTER

	********************************/
