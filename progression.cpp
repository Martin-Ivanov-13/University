#include <iostream>
using namespace std;

int foo(int arr[], int n){
	
	int len = 0, maxlen = 0;
		
	int diff = arr[1] - arr[0];	
			
	for(size_t i = 2; i < n; i++){
		
		if(arr[i] - arr[i-1] == diff)
			len ++;
		else {
			if(len > maxlen)
				maxlen = len;
			len = 0;	
		}	
		
	}
	
}

int main (){
	
	int n;
	cin >> n;
	int arr[n];
	for(size_t i = 0; i < n; i++) cin>>arr[i];
	
	return 0;
}
