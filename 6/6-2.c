#include <stdio.h>
#define DEF(x) x & 1

int main() {
	unsigned char c;
	scanf("%c", &c);
	int cc = (int)c;
	printf("The decimal representation is: %d\n", cc);
	printf("The least significant bit is: %d", DEF(cc));
}
