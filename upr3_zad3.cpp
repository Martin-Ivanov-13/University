#include <iostream>
using namespace std;

int main (){
	
	char sign;
	cin >> sign;
	int a, b;
	cin >> a >> b;
	
	switch(sign){
		case '+':{
			cout << a + b;
			break;
		}
		case '-':{
			cout << a - b;
			break;
		}
		case '*':{
			cout << a * b;
			break;
		}
		case '/':{
			cout << a / b;
			break;
		}
		default :{
			cout << "Invalid input. Enter a valid sign.";
			break;
		}
	}
	
	return 0;
}
