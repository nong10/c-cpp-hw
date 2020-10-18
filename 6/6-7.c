#include <stdio.h>

unsigned char set3bits(unsigned char ch, int a, int b, int c);

int main() {
	unsigned char ch; 
	int a, b, c;
	scanf("%c%d%d%d", &ch, &a, &b, &c);
	int tmp, mask = 128;

	printf("The decimal representation is: %d\n", (int)ch);
	printf("The binary representation is: ");
	// determine the length of char
	for(int i = 7; i >= 0; i--) {
		tmp = mask & ch;
		mask = mask >> 1;
		printf("%d", tmp >> i);
	}

	ch = set3bits(ch, a, b, c);

	printf("\nAfter setting the bits: ");

	mask = 128;
	for(int i = 7; i >= 0; i--) {
		tmp = mask & ch;
		mask = mask >> 1;
		printf("%d", tmp >> i);
	}
	printf("\n");
	return 0;
}

/*
	really got nothing to common...
*/
unsigned char set3bits(unsigned char ch, int a, int b, int c) {
	return ch | (1 << a) | (1 << b) | (1 << c);
}
