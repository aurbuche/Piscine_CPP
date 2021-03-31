#include "AWeapon.hpp"
#include "PlasmaRiffle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main(void)
{
	PlasmaRiffle *plasmariffle = new PlasmaRiffle();
	PowerFist* powerfist = new PowerFist();
	Character* Tak = new Character("Takashi Kovacs");
	Character* Kristin = new Character("Kristin Orthega");
	Enemy* radScorpion = new RadScorpion();
	SuperMutant* superMutant = new SuperMutant();

	std::cout << *Tak;
	Tak->equip(plasmariffle);
	Kristin->equip(powerfist);
	std::cout << *Tak << *Kristin << std::endl;

	Tak->attack(radScorpion);
	Kristin->attack(superMutant);
	std::cout << *Tak << *Kristin << std::endl;
	Tak->attack(superMutant);
	Kristin->attack(radScorpion);
	std::cout << *Tak << *Kristin << std::endl;

	std::cout << "/!\\ CHANGING WEAPON! /!\\" << std::endl;
	Tak->equip(powerfist);
	Kristin->equip(plasmariffle);
	Tak->attack(radScorpion);
	Kristin->attack(superMutant);
	std::cout << *Tak << *Kristin << std::endl;
	Tak->attack(superMutant);
	Kristin->attack(radScorpion);
	std::cout << *Tak << *Kristin << std::endl;

	std::cout << "/!\\ LET\'S RECOVER SOME AP /!\\" << std::endl;
	Tak->recoverAP();
	Kristin->recoverAP();
	std::cout << *Tak << *Kristin << std::endl;
	delete plasmariffle;
	delete powerfist;
	delete Tak;
	delete Kristin;
	delete radScorpion;
	return 0;
}

//int main()
//{
//	Character* me = new Character("me");
//
//	std::cout << *me;
//
//	Enemy* b = new RadScorpion();
//
//	AWeapon* pr = new PlasmaRiffle();
//	AWeapon* pf = new PowerFist();
//
//	me->equip(pr);
//	std::cout << *me;
//	me->equip(pf);
//
//	me->attack(b);
//	std::cout << *me;
//	me->equip(pr);
//	std::cout << *me;
//	me->attack(b);
//	std::cout << *me;
//	me->attack(b);
//	delete b;
//	std::cout << *me;
//	return 0;
//}
