#include <stdio.h>
#include <math.h>

float geometric_mean(float arr[], int num);
float highest_num(float arr[], int num);
float lowest_num(float arr[], int num);

int main()
{
	float arr[15];
	float tmp = 1;
	int i = 0;
	while(i < 15 && tmp > 0) {
		scanf("%f", &tmp);
		arr[i] = tmp;
		i ++;
	}
	char c;
	scanf("\n%c", &c);
	getchar();
	switch(c) {
		case 'm':
			printf("%f", geometric_mean(arr, i - 1));
			break;
		case 'h':
			printf("%f", highest_num(arr, i - 1));
			break;
		case 's':
			printf("%f", lowest_num(arr, i -1));
	}
	return 0;
}

float geometric_mean(float arr[], int num) {
	float product = arr[0];
	for(int i = 1; i < num - 1; i ++) {
		product = product * arr[i];
	}
	return pow(product, 1.0f/(float)num);
}

float lowest_num(float arr[], int num) {
	float low  = arr[0];
	for(int i = 1; i < num; i ++) {
		if(low > arr[i]) {
			low = arr[i];
		}
	}
	return low;
}

float highest_num(float arr[], int num) {
	float high = arr[0];
	for(int i = 1; i < num; i ++) {
		if(high < arr[i]) {
			high = arr[i];
		}
	}
	return high;
}