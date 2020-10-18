#include <stdio.h>
#include <stdlib.h>

void merge(FILE* f, char name[10]);

int main() {
    char name1[10] = "text1.txt";
    char name2[10] = "text2.txt";
    FILE* f = fopen("merge12.txt", "w");
    if (f == NULL) { 
		printf("Cannot open file!\n"); 
		exit(1); 
	}
    merge(f, name1);
    merge(f, name2);
    return 0;
}

void merge(FILE* f, char name[10]) {
    FILE* in = fopen(name, "r");
    if (in == NULL) { 
		printf("Cannot open file!\n"); 
		exit(1); 
	}
    char str[100];
    // when fgets is not success it return NULL
    while(fgets(str, 100, in) != NULL) {
        printf("%s", str);
        fputs(str, f);
    }
    fclose(in);
}
