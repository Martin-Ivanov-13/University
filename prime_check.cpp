#include <bits/stdc++.h>
using namespace std;

int n;

bool prime(int x){
	
	for(int i = 2; i<x; i++){
		if(x%i == 0)
		 return false;
	}
	
	return true;
}

int main(){
	
	scanf("%d", &n);
	
	for(int i = 1; i<=n; i++){
		if(prime(i))
		 printf("%d\n", i);
	}
	
	return 0;
}
