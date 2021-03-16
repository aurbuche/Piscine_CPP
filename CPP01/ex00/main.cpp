#include "Pony.hpp"

//void	ponyOnTheStack()
//{
//	Pony	ponyone;
//
//	ponyone.add("Billy", "grey", "little");
//	ponyone.print_data();
//	std::cout << std::endl;
//}

void	ponyOnTheHeap()
{
	Pony	*ponytwo;
	Pony	*ponycopy;

	ponytwo = new Pony("Poulet", "Brown", "Big");
	ponytwo->print_data();
	ponycopy = new ponytwo;
//	ponycopy->print_data();
	delete ponytwo;
//	delete ponycopy;
}

int	main()
{
//	ponyOnTheStack();
	ponyOnTheHeap();

	return 0;
}
