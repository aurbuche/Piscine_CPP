#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int                     main( void )
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);

	for (int i = 0; i < vlc->getCount(); i++)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << "\n__________________________________________________\n";

	vlc->getUnit(0)->battleCry();
	vlc->getUnit(1)->battleCry();
	vlc->getUnit(0)->rangedAttack();
	vlc->getUnit(1)->rangedAttack();
	vlc->getUnit(0)->meleeAttack();
	vlc->getUnit(1)->meleeAttack();

	std::cout << "\n__________________________________________________\n";
	delete vlc;
	return 0;
}
