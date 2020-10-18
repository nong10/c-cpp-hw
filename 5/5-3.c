#include <stdio.h>
#include <string.h>

int count_lower(char* str);

int main() { 
	char str[50] = {'a'};
	while(str[0] != '\n') {
		fgets(str, sizeof(str), stdin);
		if(str[0] != '\n') {
			printf("%d\n", count_lower(str));
		}
	}
	return 0;
}

int count_lower(char* str) { 
	int sum = 0; // count lowercase 
	for(int i = 0; i < strlen(str); i++) { 
		if(*(&str[0] + i) <= 'z' && *(&str[0] + i) >= 'a') { // wheather str[i] is same to lowercase[]
			sum++;
		}
	}
	return sum;
}

