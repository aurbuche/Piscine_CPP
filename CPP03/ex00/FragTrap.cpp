#include "FragTrap.hpp"

FragTrap::FragTrap(void)
	: HitPoints(100), MaxHitPoints(100), EnergyPoint(100), MaxEnergyPoint(100),
	Level(1), name("Computer"), MeleeAttackDamage(30), RangedAttackDamage(20),
	ArmorDamageReduction(5)
{
	std::cout << name << " initialized..." << std::endl;
}

FragTrap::FragTrap(std::string name)
		: HitPoints(100), MaxHitPoints(100), EnergyPoint(100), MaxEnergyPoint(100),
		  Level(1), name(name), MeleeAttackDamage(30), RangedAttackDamage(20),
		  ArmorDamageReduction(5)
{
	std::cout << name << " initialized..." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destruction of " << name << std::endl;
}

void 	FragTrap::rangedAttack(const std::string &target){
	std::cout << "FR4G-TP <" << name << "> attacks <" << target << "> at range, causing <" << RangedAttackDamage << "> points of damage!\n";
}

void	FragTrap::meleeAttack(const std::string &target) {
	std::cout << "FR4G-TP <" << name << "> attacks <" << target << "> at melee, causing <" << MeleeAttackDamage << "> points of damage!\n";
}

void	FragTrap::takeDamage(unsigned int amount) {
	if ((int)amount > (HitPoints + ArmorDamageReduction))
	{
		HitPoints = 0;
		std::cout << "FR4G-TP <" << name << "> take <" << amount << "> of damage. No energy left!\n";
	}
	else if ((int)amount < 0)
		std::cout << "FR4G-TP You can't damage with a negative value! Logic no?\n";
	else
	{
		HitPoints = HitPoints + ArmorDamageReduction - amount;
		std::cout << "FR4G-TP <" << name << "> take <" << amount << "> of damage. It has now <" << HitPoints << "> of energy point!\n";
	}
	std::cout << "Your armor has " << ArmorDamageReduction << std::endl;
}

void 	FragTrap::beRepaired(unsigned int amount) {
	if ((int)amount >= MaxHitPoints)
	{
		HitPoints = MaxHitPoints;
		ArmorDamageReduction = 5;
		std::cout << "FR4G-TP <" << name << "> " << amount << " is a little bit to much! I will give you the max HP!\n";
	}
	else if ((int)amount < 0)
		std::cout << "FR4G-TP Can't be repaired of negative value... It is logic but not for everyone apparently!\n";
	else
	{
		HitPoints += amount;
		if (HitPoints >= 100)
		{
			ArmorDamageReduction = HitPoints - 100;
			HitPoints = 100;
			if (ArmorDamageReduction > 5)
				ArmorDamageReduction = 5;
		}
		std::cout << "FR4G-TP <" << name << "> take <" << amount << "> of repaired point. It has now <" << HitPoints << "> of energy point!\n";
		std::cout << "Your armor has " << ArmorDamageReduction << std::endl;
	}
}
