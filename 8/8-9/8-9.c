/*
	CH-230-A
	a8_p9.[c]
	Zixiang Wang
	zixwang@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_punctuation(char ch);

int main() {
    char filename[100];
    fgets(filename, 100, stdin);
    filename[strlen(filename) - 1] = '\0';
    FILE *f = fopen(filename, "r");
    if (f == NULL) { 
		printf("Cannot open file!\n"); 
		exit(1); 
	}
    char temp;
    int count = 0;
    int word = 1; // when meet character -> 0, meet the punctuations -> 1
    while((temp = getc(f)) != EOF) {
        if(is_punctuation(temp) == 0 && word == 1) {
            word = 0;
        }
        if(is_punctuation(temp) == 1 && word == 0) {
            word = 1;
            count ++;
        }
    }
    printf("The file contains %d words.", count);
    fclose(f);
    return 0;
}

/*
    return 1 if ch is a punctuation 
    return 0 if not 
*/
int is_punctuation(char ch) {
    char punc[] = {' ', ',', '?', '!', '.', '\t', '\n', '\r'};
    int tag = 0;
    for(int i = 0; i < 8; i ++) {
        if(punc[i] == ch) {
            tag = 1;
        }
    }
    return tag;
}