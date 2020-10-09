#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;

int main ()
{
    string filename;
    cin >> filename;
    ifstream infile;

    infile.open(filename.c_str(),ios::in);
    
    if(!infile){
        cout << "error" << endl;
    }
    string outfilename;
    outfilename = filename;
    //outfilename.erase(outfilename.end(),-10);
    int index = filename.find(".txt", 0);
    outfilename.insert(index, "_copy");

    ofstream outfile;
    outfile.open(outfilename.c_str());

    //outfile.open(outfilename);

    string content = "";
    int i;
    for(i=0 ; infile.eof()!=true ; i++){
        content += infile.get();
    }

    //content.erase(content.end()-1);

    cout << content;

    infile.close();
    outfile << content;
    outfile.close();
    return 0;
}
