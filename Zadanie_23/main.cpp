#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

template<class T>
class B {
	T val;
public:
	B(T v) : val(v) {}
	T getV() const { return val; }

	bool operator < (const B & v) const {
		return val < v.val;
	}
};

template<class T>
ostream & operator<<(ostream & out, const B<T> & v) {
	out << v.getV();
	return out;
}

template<class T>
struct Out {
	ostream & out;
	Out(ostream & out) :out(out) {}
	void operator()(const T & val) {
		out << val << " ";
	}
};

bool Less(const B<float> & a, const B<float> & b) {
	return int(a.getV()) < int(b.getV());
}

int main()
{
	vector<B<float>> v1 = { 2.28f, 1.66f, 1.32f, 3.94f,
							3.64f, 2.3f, 2.98f, 1.96f,
							2.62f, 1.13f };


	stable_sort(v1.begin(), v1.end(), Less);

	for_each(v1.begin(), v1.end(), Out<B<float>>(cout));
	cout << endl;

	std::cin.ignore(); // extra line
	return 0;
}