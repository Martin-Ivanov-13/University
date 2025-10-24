#include <iostream>
#include <string>
using namespace std;

int main (){
	
	int N;
	cin >> N;
	
	string num;
	int in1 = -1, in3 = -1, counter = 0;
	
	for(size_t i = 1; i <= N; i++){
		cin >> num;
		
		in1 = num.find("1", 0);
		if(in1 != -1)
			in3 = num.find("3", in1);
			
		if(in3 != -1)
			counter++;
			
		in1 = in3 = -1;		
	}
	
	if(counter == 0)
		cout << "No";
	else		
		cout << counter;	
		
	return 0;
}
