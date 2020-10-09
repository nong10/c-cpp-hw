/*
CH-230-A
a3_p11
11.c
Ziheng Gao
zgao@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>

int main(){
    char one[100];//input string1
        scanf("%[^\n]",one);
        getchar();
    char two[100];//in put string2
        scanf("%[^\n]",two);
        getchar();
    char three[100];//declare string3
    char c;
        scanf("%c",&c);
        getchar();
        printf("length1=%ld\n",strlen(one));
        printf("length2=%ld\n",strlen(two));
    char co[100];
        strcpy(co,one);
        strcat(co,two);
        printf("concatenation=%s\n",co);
        printf("copy=%s\n",strcpy(three,two));
    if(strcmp(one,two)<0){
        printf("one is smaller than two\n");}
    else if(strcmp(one,two)>0){
        printf("one is larger than two\n");}
    else if(strcmp(one,two)==0){
        printf("one is equal to two\n");}//different condition of comparison
    for(int i=0;i<strlen(two);i++){
        if(c==two[i]){
                printf("position=%d\n",i);
                break;//condition fulfilled
                   }
        else if(i==strlen(two)-1){
                printf("The character is not in the string\n");//can not found
                }
            }
return 0;
}

