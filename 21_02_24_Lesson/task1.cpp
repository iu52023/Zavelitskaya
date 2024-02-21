#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(0, "Rus");
	int num;
	std::cin >> num;
	string result;
	switch (num)
	{
	case 1:
		result = "зима";
		break;
	case 2:
		result = "весна";
		break;
	case 3:
		result = "лето";
		break;
	case 4:
		result = "осень";
		break;
	default:
		result = "что-то пошло не так";
	};
	std::cout << "Вот, что получилось: ";
	std::cout << result;
	return 0;
}
