#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> v1(10, 3);
	v1.push_back(3);
	cout << v1.capacity() << " " << v1.size() << endl;

	std::cin.ignore();
	return 0;
}