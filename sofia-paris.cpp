#include <iostream>

int main (){
	
	// cin
	int dist;
	std::cin >> dist;
	
	int maxFull;
	std::cin >> maxFull;
	
	int station_count;
	std::cin >> station_count;
	int stations[station_count];
	for(size_t i = 0; i < station_count; i++)
		std::cin >> stations[i];
		
	int pos = 0;
			
	// check station 0
	if(stations[0] > pos + maxFull){
		std::cout << "can't reach";
		return 0;
	}
	
	// travel
	for(size_t i = 1; i < station_count; i++){
		
		if(pos + maxFull >= dist)
			break;
			
		if(stations[i] > pos + maxFull){
			if(stations[i-1] <= pos){
				std::cout << "can't reach";
				return 0;
			}
			else{
				std::cout << stations[i-1] << std::endl;
				pos = stations[i-1];
			}
		}
		
	}
	
	return 0;
}
