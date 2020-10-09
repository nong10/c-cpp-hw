/*
	CH-230-A
	a5-p7.[c]
	Zixiang Wang
	zixwang@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char one[100], two[100];
	fgets(one, sizeof(one), stdin);
	fgets(two, sizeof(two), stdin);
	int length1;
	int length2;
	length1 = strlen(one) - 1;
	length2 = strlen(two) - 1;
	char* string1 = (char*)malloc(sizeof(char) * (length1 + length2 + 1)); // create the 3rd string
	int i = 0;
	while(i < length1) { // put string "one" into the 3rd string
		string1[i] = one[i];
		i++;
	}
	i = 0;
	while(i < length2) { // put string "two" into the 3rd string
		string1[i + length1] = two[i];
		i++;
	}
	string1[length1 + length2] = '\0'; // put an end so it can print without error
	printf("Result of concatenation: %s\n", string1);
	free(string1);
	return 0;
}






/*	
	NOTICE! Function strlen() returns the length of string, however it determines the 
	length by finding '\0' !!!!!! This could cause problem when you use this function
	before you put value into the string. I've wasted nearly 30mins on this problem!!
	I'm defeated...
*/