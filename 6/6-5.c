#include <stdio.h>

int main() {
	unsigned char c;
	scanf("%c", &c);
	printf("The decimal representation is: %d\n", (int)c);
	printf("The backwards binary representation is: ");
	unsigned int mask = 128;
	unsigned int tmp = 0;
	int length = 9;
	// determine the length of (int)char for no reason
	while(length > 0 && tmp == 0) { 
		length--;
		tmp = (mask & c);
		//printf("tmp : %d\n", tmp);
		mask = mask >> 1;
		//printf("mask : %d\n", mask);
	}
	//printf("length : %d\n", length);
	mask = 1;
	for(int i = 0; i < length; i++) {
		tmp = mask & c;
		mask = mask << 1;
		tmp = tmp >> i;
		printf("%d", tmp);
	}
	printf("\n");
	return 0;
}
