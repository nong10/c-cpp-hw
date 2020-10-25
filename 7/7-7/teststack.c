#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
	Stack s;
	s.count = 0;
	char op = '0';
	int temp;
	while(op != 'q') {
		scanf("%c", &op);
		getchar();
		switch(op) {
			case 's':
				scanf("%d", &temp);
				getchar();
				printf("Pushing ");
				if(is_full(&s)) {
					printf("Stack Overflow!\n");
				}
				else {
					printf("%d\n", temp);
					push(temp, &s);
				}
				break;
			case 'p':
				printf("Popping ");
				if(is_empty(&s)) {
					printf("Stack Underflow\n");
				}
				else {
					pop(&s);
					printf("\n");
				}
				break;
			case 'e':
				printf("Emptying Stack ");
				empty(&s);
				printf("\n");
				break;
			case 'q':
				printf("Quit\n");
				break;
		}
	}
	return 0;
}
