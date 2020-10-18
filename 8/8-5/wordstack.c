#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

int read(Stack* ps, char str[1000]);
int is_palindromic(Stack* ps, char str[1000]);

int main() {
	char str[1000];
	Stack s;
	Stack* ps = &s;
	int op = 0;
	while(1) {
		op = read(ps, str);
		if(op == 1) {
			printf("exit\n");
			break;
		}
		if(is_palindromic(ps, str)) {
			printf("The sentence is palindromic by words! \n");
		}
		else {
			printf("The sentence is not palindromic by words!\n");
		}
	}
	return 0;
}

/*
	return 1 when enter "exit"
*/
int read(Stack* ps, char str[1000]) {
	printf("read\n");
	char* temp = malloc(sizeof(char) * 30);
	while(scanf("%s", temp) != EOF) {
		if(strcmp(temp, "exit")) {
			return 1;
		}
		strcat(str, temp);
		push(temp, ps);
	}
	return 0;
}

/*
	return 0 if palindromic
	return non-0 if not 
*/
int is_palindromic(Stack* ps, char str[1000]) {
	char revers[1000];
	char temp[30];
	while(is_empty(ps)) {
		pop(temp, ps);
		strcat(revers, temp);
	}
	return !strcmp(revers, str);
}
