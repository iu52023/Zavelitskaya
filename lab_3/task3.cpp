#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int factorial (int n){
	int total = 1;
	for (int i = 0; i<=n;i++){
		if (i==0){total =1;}
		else{total *=i;}
	}
	return total;
}

double s (int n, double x){
    double pi = 3.14159;
	double total = cos(pi/4)*pow(x,n+1);
	return total;
}


int main (){
	double x = 0, y,sum = 1, e = 2.71828, pi = 3.14159;
	int n = 0;
	for (;x<=1; x+=0.2){
		y = 1 + x*pow(e,x)*cos(pi/4);
		for (; s(n,x)/factorial(n)>=0.000001;n++){
			sum += s(n,x)/factorial(n);
		}
		std::cout << setprecision(6) << x << "\t" << y << "\t" << sum << "\t" << n <<"\t";
		int n = 0;
		std::cout<<"\n";
	}
}
