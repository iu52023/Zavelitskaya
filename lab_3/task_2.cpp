#include <iostream>

int main(){
	int a,b;
	int total = 1;
	std::cin >> a;
	if (a>=0){
		for(int i=2;i<9;i++){
			b = i*i-a;
			total *=b;
		}
	}
	else {
		for(int i=3;i<10;i++){
			b = i-2;
			total *=b;
		}
	}
	std::cout<<total;
}
