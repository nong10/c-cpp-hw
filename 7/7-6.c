#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
	char name[30];
	int age;
};

// this bubblesort only compatible with struct person!
void bubblesort(struct person* arr, int length, int (*compar)(struct person, struct person));
int compar_name(struct person a, struct person b);
int compar_age(struct person a, struct person b);
void print_arr(struct person* p, int n);

void bubblesort(struct person* arr, int length, int (*compar)(struct person, struct person)) {
	int n = length;
	int newn;
	struct person temp;
	while(1) {
		newn = 0;
		for(int i = 1; i < n; i ++) {
			if(compar(arr[i - 1], arr[i]) > 0){ 
				temp = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = temp;
				newn = i;
			}
		}
		n = newn;
		if(n <= 1) {
			break;
		}
	}
}

/*
	if a > b return value > 0
*/
int compar_name(struct person a, struct person b) {
	int returnValue = strcmp(a.name, b.name);
	if(returnValue == 0) {
		returnValue = a.age - b.age;
	}
	return returnValue;
}

/*
	if a > b return value > 0
*/
int compar_age(struct person a, struct person b) {
	int returnValue = a.age - b.age;
	if(returnValue == 0) {
		returnValue = strcmp(a.name, b.name);
	}
	return returnValue;
}

void print_arr(struct person* p, int n) {
	for(int i = 0; i < n; i ++) {
		printf("{%s, %d}; ", p[i].name, p[i].age);
	}
	printf("\n");
}

int main() {
	int n;
	scanf("%d", &n);
	getchar();
	struct person arr[n];
	for(int i = 0; i < n; i ++) {
		fgets(arr[i].name, 30, stdin);
		arr[i].name[strlen(arr[i].name) - 1] = '\0';
		scanf("%d", &arr[i].age);
		getchar();
	}
	bubblesort(arr, n, compar_name);
	print_arr(arr, n);
	bubblesort(arr, n, compar_age);
	print_arr(arr, n);/*
	struct person p1 = {"harry", 18};
	struct person p2 = {"yolanda", 19};
	printf("%d\n", compar_name(p1, p2));*/
	return 0;
}
