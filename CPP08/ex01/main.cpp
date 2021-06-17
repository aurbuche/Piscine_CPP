#include "Span.hpp"

int main()
{
	try
	{
		srand(time(0));
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(3);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "-----------------\n";
		Span sp2 = Span(1000);
		std::vector<int> tab(1000, 0);
		for (unsigned int i = 0; i < tab.size(); i++)
			tab[i] = rand() % 500;
		sp2.addMoreNumber(tab.begin(), tab.end());
		std::cout << "Size : " << tab.size() << "\n";
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout  << sp2.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}