#include <set>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> v = { 3, 4, 2, 1, 6, 5, 7, 9, 8, 0 };

	set<int> s1(v.begin(), v.end());
	s1.insert(v.begin(), v.end());

	pair<set<int>::iterator, set<int>::iterator> range;
	range = s1.equal_range(6);

	cout << *range.first << " " << *range.second << endl;

	std::cin.ignore(); // extra line
	return 0;
}