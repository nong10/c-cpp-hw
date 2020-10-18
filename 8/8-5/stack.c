#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

/*
	only works when stack is not full
*/
void push(char str[30], Stack* ps) {
	ps -> count = ps -> count + 1;
	strcpy((ps -> array)[ps -> count - 1], str);
}

void pop(char str[30], Stack* ps) {
	str = (ps -> array)[ps -> count - 1];
	ps -> count = ps -> count - 1;
}

int is_full(Stack* ps) {
	if(ps -> count == 100) {
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
