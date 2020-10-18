#include <stdio.h>
#include <stdlib.h>

void divby5(float arr[], int size);

int main() {
	int size;
	scanf("%d", &size);
	float *arr = (float*)malloc(sizeof(float) * size); // create array
	for(int i = 0; i < size; i++) { // fill array
		scanf("%f", &arr[i]);
	}
	printf("\nBefore:\n");
	for(int i = 0; i < size; i++) { // print
		printf("%.3f ", arr[i]);
	}
	divby5(arr, size);
	printf("\nAfter:\n");
	for(int i = 0; i < size; i++) { // print
		printf("%.3f ", arr[i]);
	}
	printf("\n");
	free(arr);
	return 0;
}


void divby5(float arr[], int size) {
	for(int i = 0; i < size; i++) {
		arr[i] = arr[i]/5;
	}
}
