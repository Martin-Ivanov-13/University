#include <iostream>

int matrix[101][101];

bool equalRings(unsigned int N, int target_sum, int& index1, int& index2){
	
	int sum;
	
	for(size_t i = 0; i < N/2; i++){ //ring number
	
		sum = 0;
	
		for(size_t j = i; j < N - i; j++){ //top row
			sum += matrix[i][j];
		}
		for(size_t j = i; j < N - i; j++){ //bottom row
			sum += matrix[N - i - 1][j];
		}
		for(size_t j = i + 1; j < N - i - 1; j++){ //left column
			sum += matrix[j][i];
		}
		for(size_t j = i + 1; j < N - i - 1; j++){ //right column
			sum += matrix[j][N - i -1];
		}
		
		if(sum != target_sum){
			index1 = i;
			index2 = i;
			return false;
		}
	}
	
	return true;
	
}

int main (){
	
	unsigned int N;
	std::cin >> N;
	
	for(size_t i = 0; i < N; i++){
		for(size_t j = 0; j < N; j++){
			std::cin >> matrix[i][j];
		}
	}

	int target_sum = matrix[N/2][N/2];

	int index1 = -1, index2 = -1;
	
	bool fl = equalRings(N, target_sum, index1, index2);
	
	std::cout << fl << std::endl;
	std::cout << index1 << " " << index2;
	
	return 0;
}
/*
5
1 2 -3 5 -2
-5 10 5 -2 1
1 13 20 0 -3
2 -7 5 10 3
10 2 2 3 1
*/
