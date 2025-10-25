#include <iostream>
#include <bitset>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
    string binary = bitset<8>(N).to_string(); //to binary
    
    bool fl = false;
    
    for(size_t i = 0; i < binary.size(); i++){
    	if(binary[i] == '1')
    		fl = true;
    	
		if(fl)
    		cout << binary[i];
	}
    
    return 0;
}
