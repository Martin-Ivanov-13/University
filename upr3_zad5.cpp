#include <iostream>
using namespace std;

int main (){
	
	int N, M;
	cin >> N >> M;
	
		// Validation 
	if(N >= M){
		cout << "Invalid input. Enter two numbers in ascending order.";
		return 0;
	}
	
	for(int i = N; i <= M; i++)
		cout << i << " ";	
	
	return 0;
}
