#include <vector>
#include <set>
#include <iostream>

using namespace std;

class A {
	int a;
public:
	A(int a) : a(a) {}
	int getA() const { return a; }

	/* Place 1 */
	// A - good
	bool operator < (const A & b) const { return a < b.a; }

	// C - bad
	// bool operator < (const A & b) const { return b.a < a; }

	// D - good
	//operator int() const { return a; }
};

/* Place 2 */
// B - good
//bool operator < (const A & a, const A & b) { return a.getA() < b.getA(); }

int main()
{
	vector<A>v = { 3, 4, 2, 1, 6, 5, 7, 9, 8, 0 };
	set<A> s1(v.begin(), v.end());

	s1.insert(v.begin(), v.end());
	s1.erase(s1.lower_bound(2), s1.upper_bound(7));

	for (set<A>::iterator i = s1.begin(); i != s1.end(); i++) {
		cout << i->getA() << " ";
	}
	cout << endl;

	std::cin.ignore(); // extra line
	return 0;
}