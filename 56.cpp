// file I/O

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std; 

int main()
{
    ofstream input;
    input.open("56.txt");
    input<<"This is me"<<endl;
    input<<"This is me also"<<endl;
    input.close();

    string st;
    string st1;
    ifstream output;
    output.open("56.txt");
    // output>>st>>st1;
    // getline(output, st);
    // getline(output, st1);
    // cout<<st<<endl;
    // cout<<st1 <<endl;
    while (output.eof()==0)
    {
        getline(output,st);
        cout<<st<<endl;
    }
    

    output.close();


    
    return 0;
}