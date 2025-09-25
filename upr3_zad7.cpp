#include <iostream>
using namespace std;

int main (){
	
	int N;
	cin >> N;
	
	if(N <= 0){
		cout << "Invalid input. Enter a number >0.";
		return 0;
	}
	
	int a = 0, b = 1, c = 0;
	
	cout << 1 << " ";
	for(size_t i = 1; i < N; i++){
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	} 
	
	return 0;
}
