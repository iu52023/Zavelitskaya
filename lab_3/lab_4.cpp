#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
    setlocale(LC_ALL, "Russian");
    double x,y,n,v = 0;
	if (x>0){std::cout<<"No";}
	else{
		std::cout<<"Введите значение x -> ";
		std::cin>>x;
		while (v==0){
			std::cout<<"Введите значение n -> ";
			std::cin>>n;
			std::cout<<"частичные суммы для кол-ва слагаемых 3, 5, 10 ->";
			for (int i = 0; i <n;i++){
				y += pow(-1,n+1)*pow(x,n)/n;
				if (i==2 || i==9 || i==4){
					std::cout<<y<<"\t";
				}
			}
		std::cout<<"\n"<<"Итоговая сумма -> "<<y;
			std::cout<<"\n"<<"Если хотите ввести новое значение n и продолжить введите 0, если хотите завершить введите любое другое значение";
			std::cin>>v;
		}
	}
}
