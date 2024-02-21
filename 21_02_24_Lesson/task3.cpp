#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(0, "Rus");
	int value;
	std::cin >> value;
	value > 0 ? std::cout << value + 1 : std::cout << value - 2;
	return 0;
}
