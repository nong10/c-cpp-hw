#include <stdio.h>

int main()
{
    char c;
    scanf("%c",&c);
    int n;
    scanf("%d",&n);
    double array0[100];
    int i = 0;
    double sum = 0;
    while(i < n){
        scanf("%lf",&array0[i]);
        //printf("scan while");
        ++i;
    }
    switch(c){
    case 's':
         //printf("case s begin");
         i = 0;
         while(i < n){
            sum = sum + array0[i];
            i++;
            //printf("print while");
         }
         printf("%lf\n",sum);
         //printf("case s end");
         break;
    case 'p':
         i = 0;
         while(i < n){
            printf("%lf\n",array0[i]);
            i++;
         }
         break;
    case 't':
         i = 0;
         while(i < n){
         printf("%lf\n",((float)9/5*array0[i])+ 32);
         i++;
         }
         break;
    default:
         i = 1;
         while(i < n){
         sum = sum + array0[i];
         printf("%lf\n",(sum/i));
         i++;
         }
         break;

    }
   return 0;
}
