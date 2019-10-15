#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v1;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	v1.resize(4);
	std::vector<int>::iterator it = v1.end();
	v1.insert(v1.end() - 1, 4);

	for (int i = 0; i <= v1.size(); i++) // wrong ! i <= v1.size() wykracza poza wektor
	{
		std::cout << v1.at(i) + v1[i] << " ";
	}

	std::cin.ignore();
	return 0;
}