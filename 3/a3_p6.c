#include<stdio.h>

float to_pounds(int kg,int g)
{
    float pounds= 2.2*kg+0.0022*g;
    //convert kg and g to one standard
return pounds;
}

int main(){
    int kg;
    scanf("%d",&kg);
    int g;
    scanf("%d",&g);
    printf("Result of conversion: %f\n",to_pounds(kg,g));
    return 0;
}
