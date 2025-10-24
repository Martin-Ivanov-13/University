#include <iostream>

int main (){
	
	int pointsNumber;
	std::cin >> pointsNumber;
	
	int* points = new int[pointsNumber * 2];
	
	std::cin >> points[0, 0];	
	int maxx = points[0, 0], minx = points[0, 0];
	std::cin >> points[1, 0];
	int maxy = points[1, 0], miny = points[1, 0]; 
	
	for(size_t i = 1; i < pointsNumber; i++){
		
		std::cin >> points[i, 0];
		if(points[i, 0] > maxx)
			maxx = points[i, 0];
		else if(points[i, 0] < minx)
			minx = points[i, 0];
				
		std::cin >> points[i, 1];
		if(points[i, 1] > maxy)
			maxy = points[i, 1];
		else if(points[i, 1] < miny)
			miny = points[i, 1];
		
	}
	
	std::cout << minx << " " << maxy << std::endl;
	std::cout << maxx - minx << " " << maxy - miny << std::endl;
	
	return 0;
}
