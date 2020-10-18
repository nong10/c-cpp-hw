#include <iostream>
using namespace std;

int main() {
    bool exit = true;
    string out;
    string temp;
    cin >> temp;
    while(exit) {
        out = out + temp;
        cin >> temp;
        if(temp == "exit") {
            exit = !exit;
        }
    }
    cout << out << endl;
    return 0;
}

/*
    appropriate comment :)
*/
