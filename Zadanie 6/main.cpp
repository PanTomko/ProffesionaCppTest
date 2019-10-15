#include <deque>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> v1 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int> d1(v1.begin(), v1.end());
	deque<int> d2;

	d2 = d1;

	/// Insert wont work with revers_iterator type
	d2.insert(d1.rbegin(), 10);

	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}

	std::cin.ignore(); // extra line
	return 0;
}