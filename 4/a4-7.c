#include <stdio.h>

void print_matrix(int* matrix_p, int length);
void print_under_main_daigonal(int* matrix_p, int length);

int main() { // input the number of row&column then input number in matrix
	int length = 0;
	int matrix[30][30];
	int* matrix_p = &matrix[0][0];
	scanf("%d", &length);
	for(int i = 0; i < length; i++) {
		for(int j = 0; j < length; j++) {
			scanf("%d", &matrix[i][j]);
		}
	}
	print_matrix(matrix_p, length);
	print_under_main_daigonal(matrix_p, length);
	return 0;
}

void print_matrix(int* matrix_p, int length) { 
	printf("The entered matrix is:\n");
	for(int i = 0; i < length; i++) {
		for(int j = 0; j < length; j++) {
			printf("%d ", *(matrix_p + i * 30 + j));
		}
		printf("\n");
	}
}

void print_under_main_daigonal(int* matrix_p, int length) {
	printf("Under the main diagonal:\n");
	for(int i = 1; i < length; i++) {
		for(int j = 0; j < i; j++) {
			printf("%d ", *(matrix_p + i * 30 + j));
		}
	}
}