#include "FragTrap.hpp"

int main(void)
{
	srand (time(NULL));
	FragTrap FR4G_TP("FR4G_TP");

	FR4G_TP.rangedAttack("Hyperion");
	FR4G_TP.meleeAttack("Hyperion");
	FR4G_TP.takeDamage(30);
	FR4G_TP.takeDamage(20);
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
	FR4G_TP.vaulthunter_dot_exe("oiseau");
	std::cout << "End of the fight\n";
	return 0;
}