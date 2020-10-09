/*
	CH-230-A
	a6_p6.[c]
	Zixiang Wang
	zixwang@jacobs-university.de
*/

#include <stdio.h>

/*
	really got nothing to explain... I just did what the assignment told
	cause I don't want to copy the descriptions in assignment
*/
int main() { 
	unsigned char c;
	scanf("%c", &c);

	printf("The decimal representation is: %d\n", (int)c);

	printf("The binary representation is: ");
	int tmp, mask = 128;
	for(int i = 7; i >= 0; i--) {
		tmp = mask & c;
		mask = mask >> 1;
		printf("%d", tmp >> i);
	}
	printf("\n");
	return 0;
}