/*
    CH-230-A 
    a9-p9.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <iostream>
using namespace std;

int find_max_value(int* a, int n);
void subtract_max(int* &a, int n);
void deallocate(int* a);
void print_array(int* a, int n);

int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    print_array(a, n);
    subtract_max(a, n);
    print_array(a, n);
    deallocate(a);
    return 0;
}

void print_array(int* a, int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }
    cout << endl;
}

void subtract_max(int* &a, int n) {
    int max = find_max_value(a, n);
    for(int i = 0; i < n; i++) {
        a[i] = a[i] / max;
    }
}

void deallocate(int* a) {
    delete [] a;
}

int find_max_value(int* a, int n) {
    int max = a[0];
    for(int i = 1; i < n; i++) {
        if(max < a[i]) {
            max = a[i];
        }
    }
    return max;
}

/*
    appropriate comment :)
*/