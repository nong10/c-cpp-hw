#include<stdio.h>

float sum(float input[],int Ei);
float average(float input[],int Ei);

int main(){
    int i=0;
    float input[11];
    float glass=0;//need a carrier of the input
    while(glass!=-99.0&&i<10){
        scanf("%f",&glass);
        input[i]=glass;
        i++;
    }// to limit the condition of the input
    printf("%f\n",sum(input,i));
    printf("%f\n",average(input,i));
}

float sum(float input[],int Ei){
    float resum=0;//define the return value
    int i=0;
    while(i<Ei-1){
        resum+=input[i];
        i++;
    }
    return resum;
}

float average(float input[],int Ei){
    float reave;//define the return value
    reave=sum(input,Ei)/(Ei-1);/*use(Ei-1)to delete the addtional
    number in counting*/
    return reave;
}
