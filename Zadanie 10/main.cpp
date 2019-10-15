#include <map>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	multimap<int, string> m = {
		{ 3, "three" },{ 4, "four" },{ 2, "two" },{ 1, "one" },
		{ 6, "six" },{ 5, "five" },{ 7, "seven" },{ 9, "nine" },
		{ 8, "eight" },{ 10, "ten" }
	};

	if (m[11] == "eleven") {
		cout << "eleven";
	}

	for (multimap<int, string>::iterator i = m.begin(); i != m.end(); i++) {
		cout << i->second << " ";
	}

	std::cin.ignore(); // extra line
	return 0;
}