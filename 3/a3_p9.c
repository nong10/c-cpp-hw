/*
CH-230-A
a3_p9.c
Ziheng Gao
zgao@jacobs-university.de
*/
#include<stdio.h>
double sum25(double v[],int n);

int main(){
    int n;
    scanf("%d",&n);
    double element[20];//to limit the storage of array
    int i=0;
    while(i<n){
        scanf("%lf",&element[i]);
        i++;
    }
    sum25(element,i);
    return 0;
}

double sum25(double v[],int n)
{   if (n<6){
        printf("One or both positions are invalid\n");
//the invalid condition
    return -111;
}
        printf("sum=%lf\n",v[2]+v[5]);
    return (v[2]+v[5]);//the normal condition
}

