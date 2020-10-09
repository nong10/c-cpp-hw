/*
CH-230-A
a4_p1.c
Ziheng Gao
zgao@jacobs-university.de
*/
#include<stdio.h>
#include<math.h>
double area(double a)
{
    double area;
     area= a*a*M_PI;
    return area;
}
double perimeter(double a)
{
    double p;
     p=2*a*M_PI;
     return p;
}

int main(){
    double lower;
    double upper;
    float size;
    scanf("%lf",&lower);
    scanf("%lf",&upper);
    scanf("%lf",&size);
  for(double i=lower;i<=upper;i=i+size){
        printf("%lf ",i);
        printf("%lf ",area(i));
        printf("%lf\n",perimeter(i));
    }
    return 0;
    }
