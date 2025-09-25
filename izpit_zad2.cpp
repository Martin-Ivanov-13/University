#include <iostream>

bool is_match(const char* str, const char* pattern){
	
	int index_str = 0;
	int index_pattern = 0;
	
	while(index_str < 11 || index_pattern < 11){
		
		if(pattern[index_pattern] == '.'){
			index_str++;
			index_pattern++;
		}
		else if(pattern[index_pattern] == '*'){
			while(str[index_str] == str[index_str - 1]){
				index_str++;
			}
			index_pattern++;
		}
		else if(str[index_str] != pattern[index_pattern]){
			return false;
		}
		else{
			index_str++;
			index_pattern++;
		}
	}
	
	return true;
		
}

int main() {
	
	char* str = "mississippi";
	char* pattern = "mis*is*ip*.";
	
	bool fl = is_match(str, pattern);
	std::cout << fl;	
		
	return 0;
}
