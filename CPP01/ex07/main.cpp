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
	std::string ToReplace = av[2];
	std::string ByReplace = av[3];
	std::string filename = av[1];
	std::string final;
	size_t len = ToReplace.length();
	ifs.open(av[1]);
	if (!ifs.is_open())
	{
		std::cout << "Can't open the file or the file doesn't exist!\n";
		return 1;
	}
	ofs.open(filename + ".replace");
	while (!ifs.eof())
	{
		std::getline(ifs, fc);
		int pos = fc.find(ToReplace);
//		int pos;
//		while ((pos = fc.find(ToReplace) != std::string::npos))
//		{
			if (pos == -1)
				final.append(fc);
			else
				final.append(fc.replace(pos, len, ByReplace));
//			pos += ByReplace.length();
//		}
		final.append("\n");
	}
	ofs << final;
	ifs.close();
	ofs.close();
	return 0;
}
