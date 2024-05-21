#include <iostream>
#include <fstream>

void strReplace(std::string &str, std::string s1, std::string s2)
{
	size_t start_index = str.find(s1, 0);

	while (start_index != std::string::npos)
	{
		str.erase(start_index, s1.length());
		str.insert(start_index, s2);
		start_index += s2.length();
		start_index = str.find(s1, start_index);
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Input error" << std::endl;
		return 1;
	}
	std::string outname = argv[1];
	outname += ".replace";

	std::ifstream ifs(argv[1]);
	std::ofstream ofs(outname, std::ios::trunc);
	if (!ifs.is_open() || !ofs.is_open())
	{
		std::cout << "File error" << std::endl;
		return 1;
	}

	std::string line;
	while (!ifs.eof())
	{
		std::getline(ifs, line);
		strReplace(line, argv[2], argv[3]);
		ofs << line;
		if (!ifs.eof())
			ofs << std::endl;
	}
	ifs.close();
	ofs.close();

	return 1;
}