/*
	CH-230-A
	a6_p4.[c]
	Zixiang Wang
	zixwang@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>
#define INTERMEDIATE

int scalar_product(int v[], int w[], int dimension);

int main() {
	int dimension; // the dimension of vectors (geomatrical)
	scanf("%d", &dimension);
	int* v = (int*)malloc(sizeof(int) * dimension); // creat vector
	int* w = (int*)malloc(sizeof(int) * dimension);
	for(int i = 0; i < dimension; i++) { // fill in first vector
		scanf("%d", &v[i]);
	}
	for(int i = 0; i < dimension; i++) { // fill in second vector
		scanf("%d", &w[i]);
	}
	printf("The scalar product is: %d\n", scalar_product(v, w, dimension));
	free(v);
	free(w);
	return 0;
}

/*
	compute the scalar product of two vectors
*/
int scalar_product(int v[], int w[], int dimension) { 
	int scalarProduct = 0;
	#if defined(INTERMEDIATE)
	printf("The intermediate product values are:\n");
	#endif
	for(int i = 0; i < dimension; i++) { // nothing special
		scalarProduct = scalarProduct + v[i] * w[i];
		#if defined(INTERMEDIATE)
		printf("%d\n", v[i] * w[i]);
		#endif
	}
	return scalarProduct;
}