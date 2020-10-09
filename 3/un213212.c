#include<stdio.h>

float sum(float input[],int Ei);
float average(float input[],int Ei);

int main(){
    int i=0;
    float input[11];
    float glass=0;
    while(glass!=-99.0&&i<10){
        scanf("%f",&glass);
        input[i]=glass;
        i++;
    }
    printf("%f\n",sum(input,i));
    printf("%f\n",average(input,i));
}

float sum(float input[],int Ei){
    float resum=0;
    int i=0;
    while(i<Ei-1){
        resum+=input[i];
        i++;
    }
    return resum;
}

float average(float input[],int Ei){
    float reave;
    reave=sum(input,Ei)/(Ei-1);
    return reave;
}
