#include <stdio.h>
#include <string.h>

int count_consonants(char str[]);
int main() {
	char tmp[100];
	while(tmp[0] != '\n') {
		tmp[0] = '\n';
		scanf("%[^\n]", &tmp);
		getchar();
		if(tmp[0] != '\n') {
			printf("%d \n", count_consonants(tmp));
		}
	}
	return 0;
}

int count_consonants(char str[]) {
	char vowel[]= {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U', ' '};
	int num = 0;
	for(int i = 0; i < strlen(str); i ++) {
		for(int j = 0; j < 11; j ++) {
			if(vowel[j] == str[i]) {
				num ++;
			}
		}
	}
	return strlen(str) - num;
}