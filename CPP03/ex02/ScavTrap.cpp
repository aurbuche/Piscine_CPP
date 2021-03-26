#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << name << ": \"Hello darling!\"" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << name << ": \"Hello darling!\"" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy) {
	*this = copy;
	std::cout << "Hi I'm the copy" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << name << " pass away! Salut mon pote :\'(" << std::endl;
}

ScavTrap&       ScavTrap::operator=(ScavTrap& assigned)
{
	HitPoints = assigned.HitPoints;
	MaxHitPoints = assigned.MaxHitPoints;
	EnergyPoint = assigned.EnergyPoint;
	MaxEnergyPoints = assigned.MaxEnergyPoints;
	Level = assigned.Level;
	name = assigned.name;
	MeleeAttackDamage = assigned.MeleeAttackDamage;
	RangedAttackDamage = assigned.RangedAttackDamage;
	ArmorDamageReduction = assigned.ArmorDamageReduction;
	std::cout<<"New ScavTrap create\n";
	return *this;
}

void	ScavTrap::challengeNewcomer(std::string const & target) {
	int irand = rand() % 5;

	if (EnergyPoint > MaxEnergyPoints)
		EnergyPoint = MaxEnergyPoints;
	if (EnergyPoint > 25)
	{
		if (irand == 0)
			std::cout << name << " challenges " << target << " to fix this segfault!\n";
		else if (irand == 1)
			std::cout << name << " challenges " << target << " to do a 1v1 on chess\n";
		else if (irand == 2)
			std::cout << name << " challenges " << target << " to fly a rooster!\n";
		else if (irand == 3)
			std::cout << name << " challenges " << target << " to steal the Joconde!\n";
		else if (irand == 4)
			std::cout << name << " challenges " << target << " to beat Morgan on chess!\n";
		EnergyPoint -= 25;
	}
	else
		std::cout << "No energy left\n";
}
