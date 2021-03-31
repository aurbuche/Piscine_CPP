#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	srand (time(NULL));
	FragTrap FR4G_TP("BUBUCHE");
	ScavTrap SC4V_TP("SC4V-TP");
	NinjaTrap NINJ4_TP("The super Ninja");
	SuperTrap SP_TP("SUPER U");
	std::cout << std::endl;

	FR4G_TP.rangedAttack("Hyperion");
	FR4G_TP.meleeAttack("Hyperion");
	FR4G_TP.takeDamage(30);
	FR4G_TP.beRepaired(45);
	FR4G_TP.beRepaired(100);
	FR4G_TP.vaulthunter_dot_exe("oiseau");
	std::cout << std::endl;

	SC4V_TP.rangedAttack("Hyperion");
	SC4V_TP.meleeAttack("Hyperion");
	SC4V_TP.takeDamage(30);
	SC4V_TP.beRepaired(45);
	SC4V_TP.beRepaired(100);
	SC4V_TP.challengeNewcomer("oiseau");
	SC4V_TP.challengeNewcomer("oiseau");
	std::cout << std::endl;

	NINJ4_TP.rangedAttack("Hyperion");
	NINJ4_TP.meleeAttack("Hyperion");
	NINJ4_TP.takeDamage(20);
	NINJ4_TP.beRepaired(15);
	NINJ4_TP.beRepaired(100);
	NINJ4_TP.ninjaShoeBox(FR4G_TP);
	NINJ4_TP.ninjaShoeBox(SC4V_TP);
	NINJ4_TP.ninjaShoeBox(NINJ4_TP);
	std::cout << std::endl;

	SP_TP.rangedAttack("Pablo");
	SP_TP.meleeAttack("Pablo");
	SP_TP.takeDamage(30);
	SP_TP.beRepaired(10);
	SP_TP.beRepaired(100);
	SP_TP.vaulthunter_dot_exe("Padawan");
	SP_TP.ninjaShoeBox(FR4G_TP);
	std::cout << std::endl;

	std::cout << "End of the fight\n";
	return 0;
}