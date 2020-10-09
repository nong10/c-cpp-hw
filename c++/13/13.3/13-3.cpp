/*
	CH-230-A 
    a13-3.[c or cpp or h] 
    Zixiang Wang 
    zixwang@jacobs-university.de
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	
	int n;
	cin >> n; // get n

	string names[n];
	for(int i = 0; i < n; i++) {
		cin >> names[i];
	}

    for(int i=0;i<n;i++){cout<<names[i];} // debug

	ifstream in;
	ofstream out("concatn.txt");
	string s;
	for(int i = 0; i < n; i++) {
		cout << i;
		in.open(names[i], ios::in);
		
		if(!in) {						// check file opened successfully
        	cout << "error" << endl; 
    	}

        s = "";
		while(in.eof() == false) { // copy from in to out
			s = s + (char)in.get();
            cout << s;
		}
		out << s << endl;
		in.close(); // close file
	}

	return 0;
}