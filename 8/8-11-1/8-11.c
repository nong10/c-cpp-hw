#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void concate_files(FILE* out, char filename[100]);

int main() {
    int number;
    scanf("%d", &number);
    getchar();
    char filenames[number][100]; // store file names
    FILE* out = fopen("output.txt", "w");
    if (out == NULL) { 
        printf("Cannot open file!\n"); 
        exit(1); 
    }
    for(int i = 0; i < number; i ++) { // get file names from stdin
        fgets(filenames[i], 100, stdin);
        filenames[i][strlen(filenames[i]) - 1] = '\0';
    }
    printf("Concating the content of 3 files ... \nThe result is:\n");
    for(int i = 0; i < number; i ++) { // call concate_files number times
        concate_files(out, filenames[i]);
    }
    fclose(out);
    return 0;
}

/*
    add the content of 'filename' to out
    also print the content of 'filename' on stdout
*/
void concate_files(FILE* out, char filename[100]) {
    FILE* in = fopen(filename, "r");
    if(in == NULL) {
        printf("Cannot open file!\n");
        exit(1);
    }
    char *buffer = malloc(sizeof(char) * 64);
    int length = 64;
    while(length == 64) {
        length = fread(buffer, sizeof(char), 64, in);
        printf("%s\n", buffer);
        fwrite(buffer, sizeof(char), length, out);
    }
    putc(10, out);
    fclose(in);
}
