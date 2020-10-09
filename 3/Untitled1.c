#include<stdio.h>
void print_form(int n,int m, char c);

int main()
{
    int m;
    int n;
    char c;
    scanf("%d\n",&n);
    scanf("%d\n",&m);
    scanf("%c",&c);
    print_form(n,m,c);
    return 0;
}

void print_form(int n, int m, char c)
{
    int cnt = 0;
    int cnt1 = 0;
    while(cnt<n){printf("\n");
    cnt1 = 0;
    while(m>cnt1){printf("%c",c);
    cnt1++;
    }
    m++;
    cnt++;
    }
}

