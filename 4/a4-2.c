#include <stdio.h>

int main(int argc, char const *argv[])
{
	char string[50];
	gets(string);
	char c  = string[0];
	int j = 0;
	int k = 1;
	while(c != '\0') 
	{
		if(k == 1) 
		{
			printf("%c\n", c);
		}
		else
		{
			printf(" %c\n", c);
		}
		k = -k;
		j ++;
		c = string[j];
	}
	printf("%d", j);
	return 0;
}