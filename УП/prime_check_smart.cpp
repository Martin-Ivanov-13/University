#include <bits/stdc++.h>
using namespace std;

int n;

int main (){
	
	scanf("%d", &n);
	
	bool prime[n+1]{};	
	
	for(int i = 2; i <= n; i++){
		if(!prime[i]){
			printf("%d\n", i);
			for(int j = i; j <= n; j+=i){
				prime[j] = true;
			}
		}
	}
	
	return 0;
}
