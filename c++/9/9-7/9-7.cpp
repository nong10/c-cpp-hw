/*
    CH-230-A 
    a9-p7.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <iostream>
using namespace std;

int myFirst(int* arr, int size);
double myFirst(double* arr, int size);
char myFirst(char *arr, int size);

int main() {
    char arr[] = {'a', 'a', 'u'};
    int arr2[] = {2, -10, 3, 10};
    double arr3[] = {1.3, -23.2, -10};
    cout << myFirst(arr, 3) << endl << myFirst(arr2, 4) 
    << endl << myFirst(arr3, 3) << endl;
    return 0;
}

/*
    returns the first positive even number
    returns -1 is not exist
*/
int myFirst(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        if(arr[i] > 0 && arr[i] % 2 == 1) {
            return arr[i];
        }
    }
    return -1;
}

/*
    returns the ﬁrst negative element which does not have a fractional part
    returns -1.1 if not
*/
double myFirst(double* arr, int size) {
    double temp;
    for(int i = 0; i < size; i++) {
        temp = arr[i];
        if(arr[i] < 0 && arr[i] == (int)temp) {
            return arr[i];
        }
    }
    return -1.1;
}

/*
    returns the ﬁrst consonant
    returns '0' if not
*/
char myFirst(char *arr, int size) {
    string consonants = "qwrtypsdfghjklzxcvbnm";
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < 21; j++) {
            if(arr[i] == consonants[j]) {
                return arr[i];
            }
        }
    }
    return '0';
}