/*
	CH-230-A
	a7_p6.[c]
	Zixiang Wang
	zixwang@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

/*
	from 1 - 12
	0 represent no content
*/
typedef struct stack{
	unsigned int count; //top???
	int array[12];
} Stack;

void push(int x, Stack* ps);
void pop(Stack* ps);
void empty(Stack* ps);
void init(Stack* ps);
int is_empty(Stack* ps);
int is_full(Stack* ps);

/*
	only works when stack is not full
*/
void push(int x, Stack* ps) {
	ps -> count = ps -> count + 1;
	(ps -> array)[ps -> count - 1] = x;
}

void pop(Stack* ps) {
	printf("%d ", (ps -> array)[ps -> count - 1]);
	ps -> count = ps -> count - 1;
}

int is_full(Stack* ps) {
	if(ps -> count == 12) {
		return 1;
	}
	return 0;
}

int is_empty(Stack* ps) {
	if(ps -> count == 0) {
		return 1;
	}
	return 0;
}

void empty(Stack* ps) {
	while(!is_empty(ps)) {
		pop(ps);
	}
}

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