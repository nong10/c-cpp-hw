#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double get_Value();

int main() {
    double x = get_Value();
    double y = get_Value();
    printf("%lf %lf", x, y);
    FILE* out;
    out = fopen("results.txt", "w");
    if (out == NULL) { 
		printf("Cannot open file!\n"); 
		exit(1); 
	}
    fprintf(out, "%lf\n", x + y);
    fprintf(out, "%lf\n", x - y);
    fprintf(out, "%lf\n", x * y);
    fprintf(out, "%lf\n", x / y);
    fclose(out);
    return 0;
}

double get_Value() {
    char fileName[100];
    fgets(fileName, 100, stdin);
    fileName[strlen(fileName) - 1] = '\0'; 
    // open input files
    FILE* in = fopen(fileName, "r");
    // when openning error
    if (in == NULL) { 
		printf("Cannot open file!\n"); 
		exit(1); 
	} 
    // store double values
    double x;
    fscanf(in, "%lf", &x);
    fclose(in);
    return x;
}
