#include "Mutantstack.hpp"

int main()
{
	std::cout << "MUTANTSTACK" << std::endl;

	Mutantstack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "MS TOP : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "MS SIZE : " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	Mutantstack<int>::iterator it = mstack.begin();
	Mutantstack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	/***************************************************************************/

	std::cout << "\nLIST" << std::endl;

	std::list<int> same;
	same.push_back(5);
	same.push_back(17);

	std::cout << "LIST TOP : " << same.back() << std::endl;
	same.pop_back();
	std::cout << "LIST SIZE : " << same.size() << std::endl;

	same.push_back(3);
	same.push_back(5);
	same.push_back(737);
	same.push_back(0);

	std::list<int>::iterator	it2 = same.begin();
	std::list<int>::iterator	ite2 = same.end();
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}

	return 0;
}
