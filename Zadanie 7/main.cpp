#include <deque>
#include <vector>
#include <iostream>

using namespace std;

class A {
	int a;
public:
	A(int a)
	{
		this->a = a;
		c++;
	}

	A(const A & a) // will never be used in this program
	{
		this->a = a.a;
		c++;
	}

	~A() { c--; }

	static int c;
};

int A::c(0);

int main()
{
	A* t[] = { new A(1), new A(2), new A(3), new A(4), new A(5) };
	vector<A*> v1(t, t + 10);
	deque<A*> d1(v1.begin(), v1.end());

	d1.clear();
	v1.clear();

	cout << A::c << endl;

	std::cin.ignore(); // extra line
	return 0;
}