#include <stdio.h>
#include <stdlib.h>

void print_matrix(int** A, int rows, int cols);

int main() {
	FILE* in = fopen("matrix.dat", "r");
	if(in == NULL) {
		printf("error\n");
		return -1;
	}

	int colunm, row;
	fscanf(in, "%d\n%d", &colunm, &row);
	int** A = (int**)malloc(sizeof(int *) * colunm);
	
	for(int i = 0; i < colunm; i++) {
		A[i] = (int*)malloc(sizeof(int) * row);
	}

	for(int i = 0; i < colunm; i++) {	// default value
		for(int j = 0; j < row; j++) {
			A[i][j] = 0;
		}
	}

	printf("%d%d\n", row, colunm);
	print_matrix(A, row, colunm);

	int x, y, value; // x for colunm y for row
	while(fscanf(in, "%d%d%d", &x, &y, &value) != EOF) {
		printf("%d%d%d\n", x, y, value);
		A[x-1][y-1] = value;
	}
	print_matrix(A, row, colunm);

	for(int i = 0; i < colunm; i++) {	// free
		free(A[i]);
	}
	free(A);

	return 0;
}

void print_matrix(int** A, int rows, int cols) {
	for(int i = 0; i < cols; i++) {	
		for(int j = 0; j < rows; j++) {
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
}