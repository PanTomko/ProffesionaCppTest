#include <map>
#include <algorithm>
#include <iostream>

using namespace std;


int main()
{
	map<int, int> m = {
		{0, 10}, {1, 5}, {2, 9}, {3, 6}, {4, 2},
		{5, 4}, {6, 7}, {7, 8},{8, 3},{9, 1}
	};

	map<int, int>::iterator it = find(m.begin(), m.end(), 5);

	cout << it->first << endl;

	std::cin.ignore(); // extra line
	return 0;
}