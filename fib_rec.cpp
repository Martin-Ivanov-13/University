#include <iostream>

int Fib(int n, int num1, int num2, int i){
	
	int x = num1 + num2;
	num1 = num2;
	num2 = x;
	
	if(i == n){
		return x;
	}
	else{
		i++;
		return Fib(n, num1, num2, i);
	}
}

int Fib_helper(int n){
	return Fib(n, 0, 1, 3);
}

int main (){
	
	int n;
	std::cin >> n;
	
	if(n == 0){
		std::cout << 0;
		return 0;
	}
	else if(n == 1){
		std::cout << 1;
		return 0;
	}
	
	std::cout << Fib_helper(n);
	
	return 0;
}
