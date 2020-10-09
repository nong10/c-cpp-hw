/*
	CH-230-A
	a7_p5.[c]
	Zixiang Wang
	zixwang@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int int_cmp(const void* a, const void* b);
void print_ascending(int* arr, int n);
void print_decending(int* arr, int n);
void quit(int* arr, int n);

int main() {
	int n;
	scanf("%d", &n);
	getchar();
	int* arr = malloc(sizeof(int) * n);
	void (*funcArr[])(int*, int) = {print_ascending, print_decending, quit};
	for(int i = 0; i < n; i ++) { //fill in array
		scanf("%d", &arr[i]);
		getchar();
	}
	qsort(arr, n, sizeof(int), int_cmp);
	char ch = 's';
	while(ch != 'e') {
		scanf("%c", &ch);
		getchar();
		switch (ch) {
			case 'd': 
				funcArr[1](arr, n);
				break;
			case 'a':
				funcArr[0](arr, n);
				break;
			case 'e':
				funcArr[2](arr, n);
				break;
		}
	}
	return 0;
}

void print_ascending(int* arr, int n) {
	for(int i = 0; i < n; i ++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void print_decending(int* arr, int n) {
	for(int i = n - 1; i > -1; i --) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void quit(int* arr, int n) {return;}

int int_cmp(const void* a, const void* b) {return (*(int*)a - *(int*)b);}