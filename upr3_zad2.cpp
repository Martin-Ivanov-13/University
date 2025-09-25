#include <iostream>
using namespace std;

int main(){
	
	char c;
	cin >> c;
	
	switch(c){
		case 'j':{
			cout << "Januray";
			break;
		}
		case 'f':{
			cout << "February";
			break;
		}
		case 'm':{
			cout << "March";
			break;
		}
		case 'a':{
			cout << "April";
			break;
		}
		default :{
			cout << "Invalid input. Enter j, f, m or a";
			break;
		}
	}
	
	return 0;
}
