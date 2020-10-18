#include <iostream>
using namespace std;

int myCount(int x, int y);
int myCount(char ch, string s);
int indexOf(char ch, string s);

int main() {
    cout << myCount(10, 11) << endl << myCount('i', "this is a string") << endl;
    return 0;
}

int myCount(int x, int y) {
    return y - x;
}

int myCount(char ch, string s) {
    return indexOf(ch, s);   
}

/*
    return 0 if ch not exist
    return index of ch if ch exist
*/
int indexOf(char ch, string s) {
    int count = 1;
    for(char i : s) {
        if(i == ch) {
            return count;
        }
        count++;
    }
    return 0;
}
