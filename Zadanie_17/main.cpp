#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void myfunction(int i) {
	cout << " " << i;
}

int main()
{
	int t[] = { 10, 5, 9, 6, 2, 4, 7, 8, 3, 1 };
	vector<int> v1 = { 10, 5, 9, 6, 2, 4, 7, 8, 3, 1 };

	copy_backward(t, t + 10, v1.rend());
	for_each(v1.begin(), v1.end(), myfunction);

	std::cin.ignore(); // extra line
	return 0;
}