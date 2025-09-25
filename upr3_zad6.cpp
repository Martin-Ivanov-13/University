#include <iostream>
using namespace std;

int main (){
	
	int N, M;
	cin >> N >> M;
	
	if(M == 0){
		cout << 1;
		return 0;
	}
	else if(M < 0){
		cout << "Enter a non-negative number.";
		return 0;
	}
	
	int n = N;
	
	for(size_t i = 1; i < M; i++)
		N *= n;
	
	cout << N;
	
	return 0;
}
