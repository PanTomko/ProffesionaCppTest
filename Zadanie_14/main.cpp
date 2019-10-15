#include <set>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class A {
	int a;
public:
	A(int a) : a(a) {}
	int getA() const { return a; }
	void setA(int a) { this->a = a; }
	bool operator < (const A & b) const { return a < b.a; }
};

struct display {
	void operator()(const A & a) {
		cout << " " << a.getA();
	}
};

struct add10 {
	void operator()(A & a) {
		a.setA(a.getA() + 10);
	}
};

int main()
{
	vector<A> v1 = { 10, 5, 9, 6, 2, 4, 7, 8, 3, 1 };
	set<A> s1 = { 10, 5, 9, 6, 2, 4, 7, 8, 3, 1 };

	for_each(v1.begin(), v1.end(), add10());
	for_each(v1.begin(), v1.end(), display());

	for_each(s1.begin(), s1.end(), add10());
	for_each(s1.begin(), s1.end(), display());

	std::cin.ignore(); // extra line
	return 0;
}