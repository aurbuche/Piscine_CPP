#include "Brain.hpp"
#include "Human.hpp"

//int		main()
//{
//	Human human;
//
//	human.setBrain(120, 4500);
//	human.setName("Aurelien");
//	human.setNickname("Bubuche");
//	std::cout << "Hi I am " << human.getName() << " and my nickname is " << human.getNickname() << "." << std::endl;
//	std::cout << "I have " << human.getBrainIQ() << " IQ, and my brain weighs " << human.getBrainWeight() << "g." << std::endl;
//	std::cout << "The brain's address is " << human.identify() << std::endl;
//	return 0;
//}

int main()
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}
