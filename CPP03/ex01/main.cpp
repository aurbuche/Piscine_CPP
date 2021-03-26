#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	srand (time(NULL));
	FragTrap FR4G_TP("BUBUCHE");
	ScavTrap SC4V_TP("SC4V-TP");

	FR4G_TP.rangedAttack("Hyperion");
	FR4G_TP.meleeAttack("Hyperion");
	FR4G_TP.takeDamage(30);
	FR4G_TP.beRepaired(45);
	FR4G_TP.takeDamage(300);
	FR4G_TP.takeDamage(-3);
	FR4G_TP.beRepaired(20);
	FR4G_TP.beRepaired(-206);
	FR4G_TP.beRepaired(206);
	FR4G_TP.beRepaired(100);
	FR4G_TP.vaulthunter_dot_exe("oiseau");
	FR4G_TP.vaulthunter_dot_exe("oiseau");
	FR4G_TP.vaulthunter_dot_exe("oiseau");
	FR4G_TP.vaulthunter_dot_exe("oiseau");
	std::cout << std::endl;
	SC4V_TP.rangedAttack("Hyperion");
	SC4V_TP.meleeAttack("Hyperion");
	SC4V_TP.takeDamage(30);
	SC4V_TP.beRepaired(45);
	SC4V_TP.takeDamage(300);
	SC4V_TP.takeDamage(-3);
	SC4V_TP.beRepaired(20);
	SC4V_TP.beRepaired(-206);
	SC4V_TP.beRepaired(206);
	SC4V_TP.beRepaired(100);
	SC4V_TP.challengeNewcomer("oiseau");
	SC4V_TP.challengeNewcomer("oiseau");
	SC4V_TP.challengeNewcomer("oiseau");
	SC4V_TP.challengeNewcomer("oiseau");
	std::cout << "End of the fight\n";
	return 0;
}