
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(0, "Rus");
	int value1;
	int value2;
	std::cin >> value1;
	std::cin >> value2;
	value1/value2 ? cout << "делится нацело\n" : cout << "не делится нацело\n";
	return 0;
}
