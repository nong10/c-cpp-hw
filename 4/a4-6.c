#include <stdio.h>
#include <stdlib.h>

void two_greatest_num(int* arr, int length);

int main(int argc, char const *argv[])
{
	int length;
	scanf("%d\n", &length);
	int* arr = (int*)malloc(sizeof(int) * length);
	for(int i = 0; i < length; i++) {
		scanf("%d", &*(arr + i));
	}
	two_greatest_num(arr, length);
	free(arr);
	return 0;
}

void two_greatest_num(int* arr, int length) {
	int high1 = *arr;
	int high2;
	for(int i = 1; i < length; i++) {
		if(*(arr + i) > high1) {
			high2 = high1;
			high1 = *(arr + i);
		}
		else if(*(arr + i) > high2) {
			high2 = *(arr + i);
		}
	}
	printf("%d, %d", high1, high2);
}

