#include <vector>
#include <iostream>

int main()
{
	std::vector<int> v1 = { 1, 2, 3, 4, 5 };
	std::vector<int> v2(v1);

	v1.resize(10);
	v2.reserve(10);

	std::vector<int>::iterator i = v1.begin();
	int ii = 0;

	while (i != v1.end()) {
		std::cout << i[ii] << " ";
		ii--;
		i++;
	}

	i = v2.begin();
	ii = 0;

	while (i != v2.end()) {
		std::cout << i[ii] << " ";
		ii--;
		i++;
	}

	std::cin.ignore();
	return 0;
}