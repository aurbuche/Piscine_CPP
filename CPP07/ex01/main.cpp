#include "iter.hpp"

#include <iostream>
#include <string>

int main(void)
{
	std::string str = "salut a toi";
	//int test[5] = {15, 16 ,17 ,18 ,19};
	::iter(str, 5, str.length());
	std::cout << str << "\n";
}
