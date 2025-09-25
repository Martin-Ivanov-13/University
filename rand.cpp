#include <bits/stdc++.h>
using namespace std;

int main() {
	
	srand(time(NULL));
	int i = 0;
	long long maxrand = 0;
	long long minrand = 9999999;
	
	while(i < 100000){
	long long random = rand();
	//cout << random << endl;
	i++;
	if(random > maxrand)
		maxrand = random;
	if(random < minrand)
		minrand = random;	
}

	cout << maxrand << " " << minrand << endl;

	return 0;
}
