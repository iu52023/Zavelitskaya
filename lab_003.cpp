#include <iostream>

int main()
{
    int valueN;
    int valueM;
    std::cout<<"Данная программа помогает найти сумму натуральных чисел (∑n), которые:\n - делятся на 5\n - не делятся на заданное пользователем число m\n";
    std::cout<<"Введите натуральное число n (положительное целое число)\n";
    std::cin>>valueN;
    std::cout<<"Введите натуральное число m (положительное целое число), должно быть строго меньше n\n";
    std::cin>>valueM;
    if (valueM>=valueN)
    {
        std::cout<<"Данные не соответствуют условиям. Попробуйте снова\n";
        return 0;
    }
    int massSourceNum[valueN];
    int i = 0;
    for (i;i<valueN;i++)
    {
        massSourceNum[i]=valueN-i;
    }
    int sum;
    for (int j;j<i;j++)
    {
        if (massSourceNum[j]%5==0 && massSourceNum[j]%valueM!=0)
        {
            sum+=massSourceNum[j];
        }
    }
    std::cout<<"Итоговая сумма: ";
    std::cout<<sum<<"\n";
    return 0;
}
