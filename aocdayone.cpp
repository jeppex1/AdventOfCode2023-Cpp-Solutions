
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main()
{
	std::ifstream file("input.txt");
	std::string line;
	int sum{ 0 };

	while (std::getline(file, line))
	{
		int firstNumIndex = line.find_first_of("0123456789");
		int lastNumIndex = line.find_last_of("0123456789");

		std::string resString;
		resString = line.at(firstNumIndex);
		resString += line.at(lastNumIndex);

		int res = stoi(resString);
		sum += res;

	}

	std::cout << sum;
}

