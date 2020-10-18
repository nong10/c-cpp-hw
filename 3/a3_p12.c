#include<stdio.h>
#include<string.h>

int main(){
    char one[100];
        scanf("%[^\n]",one);
        getchar();
    char two[100];
        scanf("%[^\n]",two);
        getchar();
    char three[100];
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
        printf("one is smaller than two\n");
    }
    else if(strcmp(one,two)>0){
        printf("one is larger than two\n");
    }
    else if(strcmp(one,two)==0){
        printf("one is equal to two\n");
    }
    int containChar = 0;//defined a value help to output result
    for(int i=0;i<strlen(two);i++){
        if(two[i]==c){
            printf("position=%d\n",i);
            containChar = 1;/*whenever found c,
            the value of containChar will change,
            the results will be printed */
        }
    }
    if(containChar == 0){
        printf("The character is not in the string\n");
    }/*when value dose not change,the c was not be founded,and the
    invalid result will be printed*/

return 0;
}
