/*
    CH-230-A 
    a9-p11.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <iostream>
using namespace std;

bool isPalindrome(string s);

int main() {
    string in = "aoligei";
    while(true) {
        cin >> in;
        if(in == "exit") {
            break;
        }
        if(isPalindrome(in)) {
            cout << in << " is a Palindrome" << endl;
        }
        else {
            cout << in << " is not a Palindrome" << endl;
        }
    }
    return 0;
}

bool isPalindrome(string s) {
    bool b = true;
    int cursor = s.size() - 1;
    for(int i = 0; i < (int)s.size() / 2; i++) {
        if(s[i] != s[cursor]) {
            b = false;
        }
        cursor--;
    }
    return b;
}

/*
    appropriate comments
    {...}
*/