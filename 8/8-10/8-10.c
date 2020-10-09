/*
	CH-230-A
	a8_p10.[c]
	Zixiang Wang
	zixwang@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int login(FILE* users, char name[100], char password[100]);

int main() {
    char* filename = malloc(sizeof(char) * 100);
    scanf("%s", filename);
    getchar();
    FILE* users = fopen(filename, "r");
    if (users == NULL) { 
		printf("Cannot open file!\n"); 
		exit(1); 
	}
    char* name = malloc(sizeof(char) * 100);
    char* password = malloc(sizeof(char) * 100);
    while(1) {
        scanf("%s", name);
        getchar();
        if(strcmp(name, "exit") == 0) {
            printf("Exiting...\n");
            break;
        }
        scanf("%s", password);
        getchar();
        if(login(users, name, password)) {
            printf("Access to user %s granted.\n", name);
        }
        else {
            printf("Access to user %s denied.\n", name);
        }
    }
    fclose(users);
    return 0;
}

/*
    return 1 if successfully login
    return 0 if not
*/
int login(FILE* users, char name[100], char password[100]) {
    // store name and password temporarily
    char* match = malloc(sizeof(char) * 100);
    fseek(users, 0L, SEEK_END);
    long filesize = ftell(users);
    fseek(users, 0L, SEEK_SET);
    while(ftell(users) != filesize) {
        fscanf(users, "%s", match);
        if(strcmp(match, name) == 0) { // if user name match password
            fscanf(users, "%s", match);
            if(strcmp(match, password) == 0) {
                fseek(users, 0L, SEEK_CUR);
                return 1;
            }
        }
    }
    fseek(users, 0L, SEEK_SET);
    return 0;
}