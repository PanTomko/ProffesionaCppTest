#include <set>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	vector<int> v1 = { 1, 2, 3, 2, 3, 5, 1, 2, 7, 3, 2, 1, 10, 4, 4, 5 };
	set<int> s1 = { 1, 2, 3, 2, 3, 5, 1, 2, 7, 3, 2, 1, 10, 4, 4, 5 };

	pair<set<int>::iterator, vector<int>::iterator> resultSet;
	resultSet = mismatch(s1.begin(), s1.end(), v1.begin());

	cout << *resultSet.first << " " << *resultSet.second << endl;

	std::cin.ignore(); // extra line
	return 0;
}