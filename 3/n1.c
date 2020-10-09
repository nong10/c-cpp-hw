#include <stdio.h>

float sum(float f[], int length);
float average(float f[], int length);

int main() {
    float f[11];
    float temp = 0;
    int i = 0;
    while(temp != -99.0 && i < 10) {
        scanf("%f", &temp);
        f[i] = temp;
        i ++;
    }
    printf("%f\n", sum(f,i));
    printf("%f", average(f,i));
}

float sum(float f[], int length) {
	float sum1 = 0;
	for(int i = 0; i < length - 1; i ++) {
		sum1 = sum1 + f[i];
	}
	return sum1;
}

float average(float f[], int length) {
	 return sum(f, length)/(length - 1);
}
