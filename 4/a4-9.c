#include <stdio.h>
#include <stdlib.h>

int prodminmax(int arr[], int n);

int main() {
	int n;
	scanf("%d\n", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("%d", prodminmax(arr, n));
}

int prodminmax(int arr[], int n) {
	int min = arr[0];
	int max = arr[0];
	for(int i = 1; i < n; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	for(int i = 1; i < n; i++) {
		if(arr[i] < min) {
			min = arr[i];
		}
	}
	return max * min;
}