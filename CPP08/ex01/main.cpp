#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(3);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "-----------------\n";
		Span sp2 = Span(5);
		std::vector<int> tab = {1, 68, 2, 95, 63, 47, 25};
		tab.push_back(50);
		tab.push_back(19);
		sp2.addMoreNumber(tab.begin(), tab.end());
		std::cout << "Size : " << tab.size() << "\n";
		sp2.addNumber(3);
		sp2.addNumber(3);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout  << sp2.longestSpan() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}