/*
	CH-230-A
	a5-p8.[c]
	Zixiang Wang
	zixwang@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void fill_matrices(int** matrix1, int** matrix2, int n, int m, int p);
void print_matrices(int** matrix1, int** matrix2, int n, int m, int p);
void print_matrices_product(int** matrix1, int** matrix2, int n, int m, int p);
void printProductWith3rdMatrix(int** matrix1, int** matrix2, int** matrix3, int n, int m, int p);

int main() {
	int n, m, p; // matrix1: n for row, m for column; matrix2: m for row, p for column
	scanf("%d%d%d", &n, &m, &p);
	int** matrix1 = (int**)malloc(sizeof(int*) * n); // matrix1[row][column]
	int** matrix2 = (int**)malloc(sizeof(int*) * m); // matrix2[row][column]
	int** matrix3 = (int**)malloc(sizeof(int*) * n); // matrix3[row][column]
	for(int i = 0; i < n; i++) {
		matrix1[i] = (int*)malloc(sizeof(int) * m);
	}
	for(int i = 0; i < m; i++) {
		matrix2[i] = (int*)malloc(sizeof(int) * p);
	}
	for(int i = 0; i < n; i++) {
		matrix3[i] = (int*)malloc(sizeof(int) * p);
	}

	fill_matrices(matrix1, matrix2, n, m, p);
	print_matrices(matrix1, matrix2, n, m, p);
	print_matrices_product(matrix1, matrix2, n, m, p);
	//printProductWith3rdMatrix(matrix1, matrix2, matrix3, n, m, p);
	
	for(int i = 0; i < n; i++) { // free matrix a
		free(matrix1[i]);
	}
	free(matrix1);
	for(int i = 0; i < m; i++) { // free matrix b
		free(matrix2[i]);
	}
	free(matrix2);
	for(int i = 0; i < n; i++) { // free matrix c
		free(matrix3[i]);
	}
	free(matrix3);
	return 0;
}

void fill_matrices(int** matrix1, int** matrix2, int n, int m, int p) {
	for(int i = 0; i < n; i++) { // i for row
		for(int j = 0; j < m; j++) { // j for column
			scanf("%d", &matrix1[i][j]);
		}
	}
	for(int i = 0; i < m; i++) { // i for row
		for(int j = 0; j < p; j++) { // j for column
			scanf("%d", &matrix2[i][j]);
		}
	}
}

void print_matrices(int** matrix1, int** matrix2, int n, int m, int p) {
	printf("Matrix A:\n");
	for(int i = 0; i < n; i++) { // i for row
		for(int j = 0; j < m; j++) { // j for column
			printf("%d ", matrix1[i][j]);
		}
		printf("\n");
	}
	printf("Matrix B:\n");
	for(int i = 0; i < m; i++) { // i for row
		for(int j = 0; j < p; j++) { // j for column
			printf("%d ", matrix2[i][j]);
		}
		printf("\n");
	}
}

// in order to save memory I didn't use the result array to store the output array

void print_matrices_product(int** matrix1, int** matrix2, int n, int m, int p) {
	printf("The multiplication result AxB:\n");
	int sum = 0;
	for(int row = 0; row < n ; row++) { // row of the c matrix
		for(int column = 0; column < p; column++) { // column of the c matrix
			sum = 0; // the value of matrixC[row][column]
			for(int i = 0; i < m; i++) { 
				sum = sum + matrix1[row][i] * matrix2[i][column];
			}
			printf("%d ", sum);
		}
		printf("\n");
	}
}

// this function uses the result array (matrix3) to print the multiplication result

void printProductWith3rdMatrix(int** matrix1, int** matrix2, int** matrix3, int n, int m, int p) { 
	printf("The multiplication result AxB:\n");
	int sum = 0;
	for(int row = 0; row < n ; row++) { // row of the c matrix
		for(int column = 0; column < p; column++) { // column of the c matrix
			sum = 0; // the value of matrixC[row][column]
			for(int i = 0; i < m; i++) { 
				sum = sum + matrix1[row][i] * matrix2[i][column];
			}
			matrix3[row][column] = sum;
		}
	}
	for(int row = 0; row < n ; row++) { // print
		for(int column = 0; column < p; column++) {
			printf("%d ", matrix3[row][column]);
		}
		printf("\n");
	}
}