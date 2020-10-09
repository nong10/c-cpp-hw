#include<stdio.h>
int main(){
    int n;
    n=0;
    int *a;
    *a=n;
      printf("%p\n",*a);
      printf("%d\n",a);
    a=12;
        printf("%d\n",a);
       return 0;
}
