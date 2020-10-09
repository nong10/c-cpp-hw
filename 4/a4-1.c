#include <stdio.h>
#include <math.h>

int main()
{
	double lowLmt, highLmt, step;
	scanf("%lf", &lowLmt);
	scanf("%lf", &highLmt);
	scanf("%lf", &step);
	for(double radius = lowLmt; radius <= highLmt; radius = radius + step) {
		printf("%lf %lf %lf\n", radius, radius * radius * M_PI, 2 * radius * M_PI);
	}
	return 0;
}