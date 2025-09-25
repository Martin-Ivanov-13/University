#include <iostream>

int count_safe_cells(int n, int m, int guard_count, int guards[][2], int wall_count, int walls[][2]){
	
	bool grid[m][n] = {};
	
	for(size_t i = 0; i < guard_count; i++){
		grid[guards[i][0]][guards[i][1]] = true;
	} // All cells with guards are blocked

	for(size_t i = 0; i < wall_count; i++){
		grid[walls[i][0]][walls[i][1]] = true;
	} // All cells with walls are blocked
	
	for(size_t i = 0; i < guard_count; i++){
		int guard_x = guards[i][0];
		int guard_y = guards[i][1];
		
		// Up
		while(true){
			if(guard_y == 0)
				break;
			else if(grid[guard_x][guard_y + 1] == true)
				break;
			else{
				grid[guard_x][guard_y + 1] = true;
				guard_y++;
			}
		}
		
		guard_x = guards[i][0];
		guard_y = guards[i][1];
		
		// Down
		while(true){
			if(guard_y >= m)
				break;
			else if(grid[guard_x][guard_y - 1] == true)
				break;
			else{
				grid[guard_x][guard_y - 1] = true;
				guard_y--;
			}
		}
		
		guard_x = guards[i][0];
		guard_y = guards[i][1];
		// Right
		while(true){
			if(guard_x >= n)
				break;
			else if(grid[guard_x + 1][guard_y] == true)
				break;
			else{
				grid[guard_x + 1][guard_y] = true;
				guard_x++;
			}
		}
		
		guard_x = guards[i][0];
		guard_y = guards[i][1];
		// Left
		while(true){
			if(guard_x == 0)
				break;
			else if(grid[guard_x - 1][guard_y] == true)
				break;
			else{
				grid[guard_x - 1][guard_y] = true;
				guard_x--;
			}
		}
		
	}
	
	int counter = 0;
	for(size_t i = 0; i < m; i++){
		for(size_t j = 0; j < n; j++){
			if(grid[i][j] == false)
				counter++;
		}
	}
	
	return counter;	
}

int main (){
	
	unsigned int m, n;
	std::cin >> m >> n;
	
	int guards[3][2];
	for(size_t i = 0; i < 3; i++){
		for(size_t j = 0; j < 2; j++){
			std::cin >> guards[i][j];
		}
	}
	
	int walls[3][2];
	for(size_t i = 0; i < 3; i++){
		for(size_t j = 0; j < 2; j++){
			std::cin >> walls[i][j];
		}
	}
	
	std::cout << count_safe_cells(m, n, 3, guards, 3, walls);
	
	return 0;
}
/*
6 4
0 0
1 1
2 3
0 1
2 2
1 4
*/
