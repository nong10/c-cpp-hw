/*
	CH-230-A
	a6_p1.[c]
	Zixiang Wang
	zixwang@jacobs-university.de
*/

#include <stdio.h>
#define SWAP(x, y, dataType) {dataType temp; temp = x; x = y; y = temp;}

int main() {
	int x, y;
	double x2, y2;
	scanf("%d%d%lf%lf", &x, &y, &x2, &y2);
	printf("After swapping:\n");
	SWAP(x, y, int)
	SWAP(x2, y2, double);
	printf("%d\n%d\n%lf\n%lf\n", x, y, x2, y2);
	return 0;
}