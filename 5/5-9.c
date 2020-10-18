#include <stdio.h>
#include <stdlib.h>

void section_print(int*** arr, int x, int y, int o);
void array_input(int*** arr, int x, int y, int o);

int main() {
	int x, y, o; // x for row, y for column, o for depth
	scanf("%d%d%d", &x, &y, &o); 					// get dimensions of array
	int*** arr = (int***)malloc(sizeof(int**) * x); // create x
	for(int i = 0; i < x; i++) { 					// create y as well as o
		arr[i] = (int**)malloc(sizeof(int*) * y);
		for(int j = 0; j < y; j++) {
			arr[i][j] = (int*)malloc(sizeof(int) * o);
		}
	}
	array_input(arr, x, y, o);
	section_print(arr, x, y, o);
	for(int i = 0; i < x; i++) { // create y as well as o
		for(int j = 0; j < y; j++) {
			free(arr[i][j]);
		}
		free(arr[i]);
	}
	free(arr);
	return 0;
}

void array_input(int*** arr, int x, int y, int o) {
	for(int i = 0; i < x; i++) { // i for x
		for(int j = 0; j < y; j++) { // j for y
			for(int k = 0; k < o; k++) { //k for o
				scanf("%d", &arr[i][j][k]);
			}
		}
	}
}

void section_print(int*** arr, int x, int y, int o) {
	for(int i = 0; i < o; i++) { // i for o
		printf("Section %d:\n", i + 1);
		for(int j = 0; j < x; j++) { // j for x
			for(int k = 0; k < y; k++) { // k for y
				printf("%d ", arr[j][k][i]);
			}
			printf("\n");
		}
	}
}
