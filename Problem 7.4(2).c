/*

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void up(char* a, int i){

    //printf("%s",a);
    char *p = a;
    /*while(*p != '\0'){
        printf("%c",*p);
        p++;
    }*/
    for(int t = 0; t < i; t++){
        while(*(p+t) >= 'a' && *(p+t) <= 'z'){
            *(p+t) = *(p+t) - 32;
        }
    }

}

void low(char* a, int i){

    //printf("%s",a);
    char *p = a;
    /*while(*p != '\0'){
        printf("%c",*p);
        p++;
    }*/
    for(int t = 0; t < i; t++){
        while(*(p+t) >= 'A' && *(p+t) <= 'Z'){
            *(p+t) = *(p+t) + 32;
        }
    }

}

void change(char* a, int i){

    //printf("%s",a);
    char *p = a;
    /*while(*p != '\0'){
        printf("%c",*p);
        p++;
    }*/
    for(int t = 0; t < i; t++){
        while(*(p+t) >= 'A' && *(p+t) <= 'Z'){
            *(p+t) = *(p+t) + 32;
            t++;
        }
        while(*(p+t) >= 'a' && *(p+t) <= 'z'){
            *(p+t) = *(p+t) - 32;
        }
    }
}

void quit(char* a, int i) {
    return;
}

int main()
{
    void (*p[5]) (char*, int);
    char string[100];
    int op = 0;
    p[1] = up;
    p[2] = low;
    p[3] = change;
    p[4] = quit;
    scanf("%[^\n]",string);
    //printf("%s",string);
    int length;
    for(length = 0; string[length] != '\0'; ++length);
    printf("origin %s\n",string);
    char result[100];
    while(op < 4){
        printf("\n1: upper, 2: lower, 3: change, 4: quit\n");
        printf("Enter number of operation: ");
        scanf("%d", &op);
        strcpy(result, string);
        printf("\norigin before function is %s",string);
        (*p[op])(result, length);
        printf("\nafter function is %s",result);
        printf("\norigin string is %s\n\n",string);
    }
}
