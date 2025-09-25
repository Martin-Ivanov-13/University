#include <iostream>

int max_steps_reachable(int pos, int dest, int steps[]){
	
	if(pos >= dest)
		return dest;
	else if(steps[pos] == 0)
		return pos;
	else{
		// Check if max step ends up on 0		 
		int step = steps[pos];
		if(steps[pos + step] != 0)
			pos = max_steps_reachable(pos + steps[pos], dest, steps);
		else if(steps[pos + step] == 0 && step == 1)
			return pos + 1;		
		else{
			while(step > 1){
				step--;
				if(steps[pos + step] != 0){
					pos = max_steps_reachable(pos + step, dest, steps);		
					break;
				}
			}
		}
		
	}	
}

int main (){
	
	int n;
	std::cin >> n;
	
	int steps[n];
	for(size_t i = 0; i < n; i++)
		std::cin >> steps[i];
	
	std::cout << max_steps_reachable(0, n-1, steps);
	
	return 0;
}
