#include "Pony.hpp"

Pony	ponyOnTheStack()
{
	Pony	ponyone = Pony("Billy", "grey", "little");
	return ponyone;
}

Pony	*ponyOnTheHeap()
{
	Pony	*ponytwo = new Pony("Poulet", "Brown", "Big");
	return ponytwo;
}

int	main()
{
	Pony ponyone = ponyOnTheStack();
	Pony *ponytwo = ponyOnTheHeap();
	ponyone.print_data();
	ponytwo->print_data();
	delete ponytwo;
	return 0;
}
