/*
	CH-230-A
	a5-p5.[c]
	Zixiang Wang
	zixwang@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

double scalar_product(double v[], double w[], int dimension);
void smallest_largest_of_vector(double v[], int dimension);

int main() {
	int dimension; // the dimension of vectors (geomatrical)
	scanf("%d", &dimension);
	double* v = (double*)malloc(sizeof(double) * dimension); // creat vector
	double* w = (double*)malloc(sizeof(double) * dimension);
	for(int i = 0; i < dimension; i++) { // fill in first vector
		scanf("%lf", &v[i]);
	}
	for(int i = 0; i < dimension; i++) { // fill in second vector
		scanf("%lf", &w[i]);
	}
	printf("Scalar product=%lf\n", scalar_product(v, w, dimension));
	smallest_largest_of_vector(v, dimension);
	smallest_largest_of_vector(w, dimension);
	return 0;
}

/*
	compute the scalar product of two vectors
*/
double scalar_product(double v[], double w[], int dimension) { 
	double scalarProduct = 0;
	for(int i = 0; i < dimension; i++) { // nothing special
		scalarProduct = scalarProduct + v[i] * w[i];
	}
	return scalarProduct;
}

/*
	compute the smallest & largest components of input vector
	then print the value of them as well as the position
*/
void smallest_largest_of_vector(double v[], int dimension) { 
	double smallest = v[0];
	int pSmallest = 0;
	double largest = v[0];
	int pLargest = 0;
	for(int i = 1; i < dimension; i++) { // finding smallest as well as largest
		if(smallest > v[i]) {
			smallest = v[i];
			pSmallest = i;
		}
		else if(largest < v[i]) {
			largest = v[i];
			pLargest = i;
		}
	}
	printf("The smallest = %lf\nPosition of smallest = %d\n", smallest, pSmallest);
	printf("The largest = %lf\nPosition of largest = %d\n", largest, pLargest);
}