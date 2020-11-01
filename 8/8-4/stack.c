#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/*
	only works when stack is not full
*/
void push(int x, Stack* ps) {
	ps -> count = ps -> count + 1;
	(ps -> array)[ps -> count - 1] = x;
}

/*
	only works when stack is not empty
*/
void pop(Stack* ps) {
	printf("%d", (ps -> array)[ps -> count - 1]);
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
		printf(" ");
	}
}
void init(Stack* ps) {
	ps -> count = 0;
}
