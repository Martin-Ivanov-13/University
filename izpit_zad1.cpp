#include <iostream>

int matrix[101][101];

void path_finder(unsigned int M, unsigned int N, int sx, int sy, int ex, int ey, int& count){
	
}

int main() {
	
	unsigned int M, N;
	std::cin >> M >> N;
	
	for(size_t i = 0; i < M; i++){
		for(size_t j = 0; j < N; j++){
			std::cin >> matrix[i][j];
		}
	}
	
	int start_coord1, start_coord2;
	std::cin >> start_coord1 >> start_coord2;
	
	int end_coord1, end_coord2;
	std::cin >> end_coord1 >> end_coord2;
	
	int path_count = 0;
	
	path_finder(M, N, start_coord1, start_coord2, end_coord1, end_coord2, path_count);
	
	std::cout << path_count;
	
	return 0;
}
