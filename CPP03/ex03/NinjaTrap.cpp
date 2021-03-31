#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	std::cout << name << "initialized..." << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 60, 5, 0)
{
	std::cout << name << "initialized..." << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "Destruction of " << name << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap &copy) : ClapTrap("empty", 60, 60, 120, 120, 60, 5, 0)
{
	*this = copy;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap &assigned) {
	HitPoints = assigned.HitPoints;
	MaxHitPoints = assigned.MaxHitPoints;
	EnergyPoint = assigned.EnergyPoint;
	MaxEnergyPoints = assigned.MaxEnergyPoints;
	Level = assigned.Level;
	name = assigned.name;
	MeleeAttackDamage = assigned.MeleeAttackDamage;
	RangedAttackDamage = assigned.RangedAttackDamage;
	ArmorDamageReduction = assigned.ArmorDamageReduction;
	return *this;
}

void NinjaTrap::ninjaShoeBox(ClapTrap &target) {
	std::cout << name << " throw a shoe to " << target.getName() << std::endl;
	std::cout << target.getName() <<  " lose 12HP!" << std::endl;
}

void NinjaTrap::ninjaShoeBox(ScavTrap &target) {
	std::cout << name << " do a \"pied-bouche\" to " << target.getName() << std::endl;
	std::cout << target.getName() <<  " lose 35HP!" << std::endl;
}

void NinjaTrap::ninjaShoeBox(FragTrap &target) {
	std::cout << name << " kick out " << target.getName() << std::endl;
	std::cout << target.getName() <<  " lose 8HP!" << std::endl;
}

void NinjaTrap::ninjaShoeBox(NinjaTrap &target) {
	std::cout << name << " find a segfault in the code of " << target.getName() << std::endl;
	std::cout << target.getName() <<  " give up!" << std::endl;
}
