#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    double x;
    string s; 
    cin >> n;
    cin >> x;
    cin >> s;
    for(int i = 0; i < n; i ++) {
        cout << x << ":" << s << endl;
    }
    return 0;
}
