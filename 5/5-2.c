#include <stdio.h>

void divby5(float arr[], int size);

int main() {
	float arr[6] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
	printf("Before:\n");
	for(int i = 0; i < 6; i++) {
		printf("%.3f ", arr[i]);
	}
	divby5(arr, 6);
	printf("\nAfter:\n");
	for(int i = 0; i < 6; i++) {
		printf("%.3f ", arr[i]);
	}
	printf("\n");
	return 0;
}

void divby5(float arr[], int size) {
	for(int i = 0; i < size; i++) {
		arr[i] = arr[i]/5;
	}
}