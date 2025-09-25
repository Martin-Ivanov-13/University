#include <iostream>

int main (){
	
	int n;
	std::cin >> n;
	
	int arr[1001];
	for(size_t i = 0; i < n; i++){
		std::cin >> arr[i];
	}
	 
    for (size_t i = 0; i < n - 1; i++){ 
  
        for (size_t j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]) 
                std::swap(arr[j], arr[j + 1]);
		}
	}

	if(n == 1){
		std::cout << arr[0] + 1;
		return 0;
	}
	
	int count = 1, sum = 0;
	
	for(size_t i = 0; i < n; i++){
		if(i + 1 == n || arr[i+1] != arr[i]){
			int x = count / (arr[i] + 1);
			if(count % (arr[i]+1) != 0)
				x++;
			sum += x * (arr[i]+1);
			count = 1;	
		}
		else
			count++;
	}

	std::cout << sum;

	return 0;
}
