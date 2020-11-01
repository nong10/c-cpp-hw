#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {
	int dec;
	scanf("%d", &dec);
	int finalDec = dec;
	int count = 0;
	Stack s;
	init(&s);
	while(dec != 0) {
		push(dec % 2, &s);
		dec = dec / 2;
		count ++;
	}
	printf("The binary representation of %d is ", finalDec);
	for(int i = 0; i < count; i ++) {
		pop(&s);
	}
	return 0;
}
