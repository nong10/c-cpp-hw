/*
	CH-230-A
	a6_p3.[c]
	Zixiang Wang
	zixwang@jacobs-university.de
*/


#include <stdio.h>
#define MAX(x) max = x > max ? x : max //determine max between two value
#define MIN(x) min = x < min ? x : min //determine min between two value
#define AVERAGE(x, y) (x + y) / 2.0f // calculate the average between two value

int main() { // I got nothing to explain in main function...  :|
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int min = a;
	int max = a;
	MIN(b);
	MIN(c);
	MAX(c);
	MAX(b);
	printf("The mid-range is: %.6f\n", AVERAGE(max, min));
	return 0;
}
