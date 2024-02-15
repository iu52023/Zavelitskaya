#include <iostream>
int main()
{
	setlocale(0, "Rus");
	int valueHour;
	int valueMinute;
	std::cout << "Добрый день! Данная программа создана, чтобы представить введенные значения времени в смешанной текстово-числовой форме с учетом падежных окончаний\n";
	std::cout << "Сначала введите значение часа (положительное целое число от 0 до 23). Например, 10. И нажмите Enter\n";
	std::cout << "Часы: ";
	std::cin >> valueHour;
	std::cout << "Теперь введите значение минут (положительное целое число больше от 0 до 59). Например, 23. И нажмите Enter.\n";
	std::cout << "Минуты: ";
	std::cin >> valueMinute;
	if (valueHour < 0 || valueHour>23 || valueMinute < 0 || valueMinute >59)
	{
		std::cout << "Введено неверное значение. Попробуйте снова";
		return 0;
	}

	std::cout << "Итоговое время: ";

	if (valueHour == 0)
	{
		if (valueMinute == 0)
		{
			std::cout << "полночь";
		}
		else
		{
			std::cout << valueHour << " часов";
		}
	}

	if (valueHour == 12)
	{
		if (valueMinute == 0)
		{
			std::cout << "полдень";
		}
		else
		{
			std::cout << valueHour << " часов";
		}
	}


	if (valueHour % 12 == 1)
	{
		std::cout << valueHour % 12 << " час";

	}
	if (valueHour % 12 >= 2 && valueHour % 12 <= 4)
	{
		std::cout << valueHour % 12 << " часа";
	}
	if (valueHour % 12 > 4)
	{
		std::cout << valueHour % 12 << " часов";
	}



	if (valueMinute %10 == 1 && valueMinute / 10 != 1)
	{
		std::cout << " " << valueMinute << " минута";
	}
	else if (valueMinute/10!=1 && (valueMinute % 10 == 2 || valueMinute % 10 == 3 || valueMinute % 10 == 4))
	{
		std::cout << " " << valueMinute << " минуты";
	}
	else if (valueMinute == 0)
	{

	}
	else
	{
		std::cout << " " << valueMinute << " минут";
	}


	if (valueHour >= 5 && valueHour <= 11)
	{
		std::cout << " утра";
	}
	else if (valueHour == 12 && valueMinute != 0)
	{
		std::cout << " дня";
	}
	else if (valueHour == 0 && valueMinute != 0)
	{
		std::cout << " утра";
	}
	else if (valueHour >= 13 && valueHour <= 17)
	{
		std::cout << " дня";
	}
	else if (valueHour >= 18 && valueHour <= 23)
	{
		std::cout << " вечера";
	}
	else if (valueHour >= 1 && valueHour <= 4)
	{
		std::cout << " ночи";
	}

	if (valueMinute == 0)
	{
		std::cout << " ровно";
	}

	return 0;

}
