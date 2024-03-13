#include <iostream>

int main()
{
	setlocale(0, "Rus");
	int valueN;
	int valueM;
	std::cout << "Данная программа помогает найти сумму натуральных чисел, которые:\n - делятся на 5\n - не делятся на заданное пользователем число m\n";
	std::cout << "Введите натуральное число n (положительное целое число)\n";
	std::cin >> valueN;
	std::cout << "Введите натуральное число m (положительное целое число), должно быть строго меньше n\n";
	std::cin >> valueM;
	if (valueM >= valueN || valueM < 0 || valueM < 0)
	{
		std::cout << "Данные не соответствуют условиям. Попробуйте снова\n";
		return 0;
	}
	int sum = 0;
	for (int i = 5; i <= valueN; i += 5)
	{
		if (i % valueM !=0)
		{
			sum += i;
		}
	}


	std::cout << "Итоговая сумма: ";
	std::cout << sum << "\n";
	return 0;
}
