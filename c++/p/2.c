#include <stdio.h>


int main() {
	double d;
	float f;
	int i;
	scanf("%lf%f%d", &d, &f, &i);
	double result = d * f * i;
	double* r_ptr = &result;
	*r_ptr = *r_ptr + 5;
	printf("%lf%lf", *r_ptr, result);
	return 0;
}