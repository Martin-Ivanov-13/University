#include <bits/stdc++.h>
using namespace std;

float a, b, c, ha;

int main (){
	
	printf("Vuvedete strana i visochina kum neq: \n");
	
	scanf("%f%f", &a, &ha);
	float area1 = (a*ha)/2;
	
	cout << fixed << showpoint;
	cout << setprecision(2); 
	cout << "area: " << area1 << endl;
	
	printf("Vuvedete drugite 2 strani: \n");
	
	scanf("%f%f", &b, &c);
	float area2 = (a + b + c)/2;

	cout << fixed << showpoint;
	cout << setprecision(2); 
	cout << "area: " << area2 << endl;
	
	printf("! Ako dvete lica ne sa ravni, tova ne e validen triugulnik !");
	
	return 0;
}
