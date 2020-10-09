/*
CH-230-A
a3_p5.c
Ziheng Gao
zgao@jacobs-university.de
*/
#include <stdio.h>

int main()
{
    char c;
    scanf("%c\n",&c);
    int n;
    scanf("%d\n",&n);
    double sn[100];//Here declare the max store place
    int i = 0;
    double sum = 0;
    while(i < n){
        scanf("%lf",&sn[i]);
        i++;//Here we in put n doubles value
    }
    i = 0;
    switch(c){
    case 's':
         while(i < n){
            sum = sum + sn[i];
            i++;
         }
         printf("%lf\n",sum);
         break;
    case 'p':
         while(i < n){
            printf("%lf\n",sn[i]);
            i++;
         }
         break;
    case 't':
         while(i < n){
         printf("%lf\n",((float)9/5*sn[i])+ 32);
         //add (float)before 9/5 to convert the type*/
         i++;
         }
         break;
    default:

         while(i < n){
         sum += sn[i];
         i++;
         }
         printf("%lf\n",(sum/n));
         break;

    }
   return 0;
}
