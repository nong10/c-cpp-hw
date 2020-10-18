#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_lowercase(char str[200]);
void print_uppercase(char str[200]);
void print_invertcase(char str[200]);
int is_uppercase(char ch);
void quit(char str[200]);

int main() {
	char str[200];
	fgets(str, 200, stdin);
	char op;
	int func;
	void (*print_str[4])(char[]) = {print_uppercase, 
		print_lowercase, print_invertcase, quit};
	while(op != '4') { // receive command
		scanf("%c", &op);
		getchar();
		func = op - 49;
		(*print_str[func])(str);
	}
	return 0;
}

void print_lowercase(char str[200]) {
	//printf("print_lowercase\n");
	int i = 0;
	while(i < strlen(str)) {
		if(is_uppercase(str[i]) == 1) {
			printf("%c", str[i] + ' ');
		}
		else{
			printf("%c", str[i]);
		}
		i ++;
	}
}


void print_uppercase(char str[200]) {
	//printf("print_uppercase\n");
	int i = 0;
	while(i < strlen(str)) {
		if(is_uppercase(str[i]) == 0) {
			printf("%c", str[i] - ' ');
		}
		else{
			printf("%c", str[i]);
		}
		i ++;
	}
}

void print_invertcase(char str[200]) {
	//printf("print_invertcase\n");
	int i = 0;
	while(i < strlen(str)) {
		if(is_uppercase(str[i]) == 0) {
			printf("%c", str[i] - ' ');
		}
		else if(is_uppercase(str[i]) == 1) {
			printf("%c", str[i] + ' ');
		}
		else {
			printf("%c", str[i]);
		}
		i ++;
	}
}

int is_uppercase(char ch) {
	if(ch >= 'A' && ch <= 'Z') {
		return 1;
	}
	else if(ch >= 'a' && ch <= 'z') {
		return 0;
	}
	return 999; // either uppercase nor lowercase
}

void quit(char str[200]) {
	return;
}

/*
	I really have no idea how to comment this code.   :(
	Like everything is named according to the usage.
	There is really no need to make some nonsense comments.
	Really have no idea about comments
*/
