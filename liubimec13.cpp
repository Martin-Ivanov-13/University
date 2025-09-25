#include <iostream>
using namespace std;

bool fav_check(int num){
		
		bool three = false;
		int digit;
	
		while(num != 0){ 
			digit = num%10;
			num /= 10;
			
			if(!three){
				if(digit == 3)
					three = true;
			}
			else{
				if(digit == 1)
					return true;
			}
		}
		
		return false;
}

int main (){
	
	int N, num, counter = 0;
	cin >> N;
	
	for(size_t i = 1; i <= N; i++){
		cin >> num;
		if(fav_check(num))
			counter++;
	}
	
	if(counter == 0)
		cout << "No";
	else	
		cout << counter;
	
	return 0;
}
