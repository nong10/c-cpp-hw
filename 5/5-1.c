#include <stdio.h>

void triangle(int n, char ch);

int main() {
	int column;
	char c;
	scanf("%d", &column);
	getchar();
	scanf("%c", &c);
	triangle(column, c);
	return 0;
}

void triangle(int n, char ch) {
	int times = n;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < times; j ++) {
			printf("%c", ch);
		}
		times--;
		printf("\n");
	}
}