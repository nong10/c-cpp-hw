#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *in = fopen("chars.txt", "r");
	FILE *out = fopen("codesum.txt","w");
	if (in == NULL || out == NULL) { 
		printf("Cannot open file!\n"); 
		exit(1); 
	} 
	int ch1 = getc(in);
	int ch2 = getc(in);
	ch1 = ch1 + ch2;
	for(int i = 100; i >= 1; i = i / 10) {
		if(ch1 / i) {
			printf("%d", ch1 / i);
			putc(ch1 / i + '0', out);
			ch1 = ch1 % i;
		}
	}
	printf("\n");
	fclose(in);
	fclose(out);
	return 0;
}
