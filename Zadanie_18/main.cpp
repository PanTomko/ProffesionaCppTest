#include <vector>
#include <set>
#include <algorithm>
#include <iostream>

using namespace std;

void print(int v) {
	cout << " " << v;
}

struct Sequence
{
	int start;
	Sequence(int start) : start(start) {}
	int operator()() { return start++; }
};

bool predicate(int v) {
	return v % 2 == 0;
}

int main()
{
	vector<int> v1(10);
	generate_n(v1.begin(), 10, Sequence(1));

	set<int> s1(v1.begin(), v1.end());
	remove_if(s1.begin(), s1.end(), predicate);

	for_each(v1.begin(), v1.end(), print);
	cout << endl;

	std::cin.ignore(); // extra line
	return 0;
}