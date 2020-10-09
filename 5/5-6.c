/*
	CH-230-A
	a5-p6.[c]
	Zixiang Wang
	zixwang@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	scanf("%d", &size);
	float* arr = (float*)malloc(sizeof(float) * size);
	int i = 0;
	while(i < size) { // fill array
		scanf("%f", &arr[i]);
		i++;
	}
	i = 0;
	while(arr[i] > 0) { // find negative number
		i++;
	}
	printf("Before the first negative value: %d elements\n", i);
	free(arr);
	return 0;
}