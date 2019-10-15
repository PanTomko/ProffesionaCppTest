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
	bool operator==(A & b) const { return a == b.a; }
};

struct Compere {
	bool operator()(const A & a, const A & b) {
		return a.getA() == b.getA();
	}
};

int main()
{
	vector<A> v1 = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5 };
	vector<A>::iterator it;

	A m1[] = { A(1), A(2), A(3) };

	it = find_end(v1.begin(), v1.end(), m1, m1 + 3, Compere());

	cout << "Found at position : " << it - v1.begin() << endl;

	std::cin.ignore(); // extra line
	return 0;
}