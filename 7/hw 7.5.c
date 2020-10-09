#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int adcend(const void* a, const void* b)
{
    int A = *((int*)a);
    int B = *((int*)b);
    return A-B;
}

int decend(const void* a, const void* b)
{
    int A = *((int*)a);
    int B = *((int*)b);
    return B-A;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i ++) {
        scanf("%d", &arr[i]);
    }
    char c;
    scanf("%c", &c);
    while ('a'<=c&&c<='e'){
        switch(c){
    case 'a':
        qsort(arr,n,sizeof(int), adcend);
        for(int i=0; i<n; i++){
            printf("%d", arr[i]);
        }
        break;
    case 'd':
        qsort(arr,n,sizeof(int), decend);
        for(int i=0; i<n; i++){
            printf("%d", arr[i]);
        }
        break;
    case 'e':
        break;
        }
    }
    return 0;
}
