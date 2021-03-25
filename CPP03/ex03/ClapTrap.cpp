#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
: HitPoints(100), MaxHitPoints(100), EnergyPoint(100), MaxEnergyPoints(100),
			Level(1), name("Computer"), MeleeAttackDamage(30), RangedAttackDamage(20),
			ArmorDamageReduction(5)
{
	std::cout << "CL4P-TP has been create!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: HitPoints(100), MaxHitPoints(100), EnergyPoint(100), MaxEnergyPoints(100),
			Level(1), name(name), MeleeAttackDamage(30), RangedAttackDamage(20),
			ArmorDamageReduction(5)
{
	std::cout << "CL4P-TP has been create!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "CL4P-TP has been delete!" << std::endl;
}

ClapTrap&       ClapTrap::operator=(ClapTrap &assigned)
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
	std::cout<<"New ClapTrap create\n";
	return *this;
}

void	ClapTrap::rangedAttack(const std::string &target) {
	std::cout << name << " uses his ranged attack on " << target << ". It causes " << RangedAttackDamage << " points of damage!\n";
}

void	ClapTrap::meleeAttack(const std::string &target) {
	std::cout << name << " uses his melee attack on " << target << ". It causes " << MeleeAttackDamage << " points of damage!\n";
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if ((int)amount > (HitPoints + ArmorDamageReduction))
	{
		HitPoints = 0;
		std::cout << "Damn " << name << " took " << amount << " points of damage. ONE SHOT! No energy left!\n";
	}
	else if ((int)amount < 0)
		std::cout << "SC4V-TP You can't damage with a negative value! Logic no?\n";
	else
	{
		HitPoints = HitPoints + ArmorDamageReduction - amount;
		std::cout << name << " get attack and took " << amount << " points of damage. It still has " << HitPoints << " of energy point!\n";
	}
}

void 	ClapTrap::beRepaired(unsigned int amount) {
	if ((int)amount > MaxHitPoints)
	{
		HitPoints = MaxHitPoints;
		ArmorDamageReduction = 5;
		std::cout << "FR4G-TP " << amount << "! Whoah it's so much!! I will give you the max HP!\n";
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
		std::cout << name << " took a super potion. It gives " << amount << " of HP!\n";
	}
}
