/*
CH-230-A
a4_p1.c
Ziheng Gao
zgao@jacobs-university.de
*/
#include<stdio.h>
#include<math.h>
double area(float a)
{
    double area;
     area= a*a*M_PI;
    return area;
}//function of area
double perimeter(float a)
{
    double p;
     p=2*a*M_PI;
     return p;
}//function of perimeter

int main(){
    float lower;
    float upper;
    float size;
    scanf("%f",&lower);
    scanf("%f",&upper);
    scanf("%f",&size);
  for(float i=lower;i<=upper;i=i+size){
        printf("%f ",i);// output empty spaces
        printf("%f ",area(i));
        printf("%f\n",perimeter(i));
    }
    return 0;
    }
