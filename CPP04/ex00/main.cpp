#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Person.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Person marc("Marc");
	std::cout << robert << jim << joe << marc;
	jim.getPolymorphed();
	joe.getPolymorphed();
	marc.getPolymorphed();
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}