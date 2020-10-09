#include <stdio.h>
#include <stdbool.h>

bool odd(unsigned char data);

int main() {
	unsigned char c = 1;
	printf("%d\n", odd(c));
	return 0;
}

bool odd(unsigned char data) {
	return data & 1;
}