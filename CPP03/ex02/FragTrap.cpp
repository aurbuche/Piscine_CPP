#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap("default", 100, 100, 100, 100, 30, 20, 5)
{
	std::cout << name << " initialized..." << std::endl;
}

FragTrap::FragTrap(std::string name)
		:ClapTrap(name, 100, 100, 100, 100, 30, 20, 5)

{
	std::cout << name << " initialized..." << std::endl;
}

FragTrap::FragTrap(FragTrap &copy) {
	*this = copy;
	std::cout << "The copy is create!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destruction of " << name << std::endl;
}

FragTrap&       FragTrap::operator=(FragTrap& assigned)
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
	std::cout<<"New FR4G-TP create\n";
	return *this;
}

void	FragTrap::vaulthunter_dot_exe(const std::string &target) {
	int irand = rand() % 5;
	if (EnergyPoint > MaxEnergyPoints)
		EnergyPoint = MaxEnergyPoints;
	if (EnergyPoint > 25)
	{
		if (irand == 0)
			std::cout << name << " just used his super laser that throws rainbows, " << target << " is stunned!" << std::endl;
		else if (irand == 1)
			std::cout << name << " calls Vilebrequin, Sylvain and Pierre DAB, " << target << " is dumbfounded!" << std::endl;
		else if (irand == 2)
			std::cout << name << " arrives with the 1000tiplat, " << target << " got crushed like a shit!" << std::endl;
		else if (irand == 3)
			std::cout << name << " plays Smash against " << target << ", he tilted" << std::endl;
		else if (irand == 4)
			std::cout << name << " got absorbed into the black hole" << std::endl;
		EnergyPoint -= 25;
	}
	else
		std::cout << "No energy left!" << std::endl;
}
