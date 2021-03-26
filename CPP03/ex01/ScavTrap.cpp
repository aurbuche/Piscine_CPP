#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
		: HitPoints(100), MaxHitPoints(100), EnergyPoint(100), MaxEnergyPoints(100),
		  Level(1), name("Computer"), MeleeAttackDamage(30), RangedAttackDamage(20),
		  ArmorDamageReduction(5)
{
	std::cout << name << ": \"Hello darling!\"" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
		: HitPoints(100), MaxHitPoints(100), EnergyPoint(100), MaxEnergyPoints(100),
		  Level(1), name(name), MeleeAttackDamage(30), RangedAttackDamage(20),
		  ArmorDamageReduction(5)
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

void 	ScavTrap::rangedAttack(const std::string &target){
	std::cout << name << " uses his ranged attack on " << target << ". It causes " << RangedAttackDamage << " points of damage!\n";
}

void	ScavTrap::meleeAttack(const std::string &target) {
	std::cout << name << " uses his melee attack on " << target << ". It causes " << MeleeAttackDamage << " points of damage!\n";
}

void	ScavTrap::takeDamage(unsigned int amount) {
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

void 	ScavTrap::beRepaired(unsigned int amount) {
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
