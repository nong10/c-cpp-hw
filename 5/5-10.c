#include <stdio.h>

void print_num(int neo);

int main() { // I really have no idea how to comment this code properly :(
	int neo;
	scanf("%d", &neo); // times to print
	print_num(neo);
	return 0;
}

void print_num(int neo) { 
	printf("%d\n", neo); 
	if(neo == 1) { // the stop statement
		return;
	}
	print_num(neo - 1);
	return;
}
