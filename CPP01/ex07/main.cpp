#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "No file" << std::endl;
		return 1;
	}
	std::ifstream ifs;
	std::ofstream ofs;
	std::string fc;
	std::string str;
	std::string ToReplace = av[2];
	std::string ByReplace = av[3];
	std::string filename = av[1];
	std::string final;
	size_t len = ToReplace.length();
	int pos;
	ifs.open(av[1]);
	if (!ifs.is_open())
	{
		std::cout << "Can't open the file or the file doesn't exist!\n";
		return 1;
	}
	ofs.open(filename + ".replace");
	int i = 0;
	while (!ifs.eof()) {
		if (i > 0)
			final.append("\n");
		std::getline(ifs, str);
		while ((pos = str.find(ToReplace)) != -1)
			str.replace(pos, len, ByReplace);
		final.append(str);
		i++;
	}
	ofs << final;
	ifs.close();
	ofs.close();
	return 0;
}
