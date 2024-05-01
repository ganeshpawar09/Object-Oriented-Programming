// File I/O Read , Write

#include<iostream>
#include<fstream>
using namespace std; 

// The useful classes for working with files in c++are
//1  fsteambase
//2  ifsteam --> derived from fstreambase
//3  ofsteam --> derived from fstreambase

// In order work with file in C++, you will have to open it. 
// Primarilly, there are 2 ways to opne files
// 1  Using the constructor
// 2  Using the member function open() of the class

int main()
{   
    string st ="Ganesh";
    string st2;

    // opening files using constructor and writing it
    ofstream A("54.txt"); //write operation
    A<<st;


    // opening files using constructor and read it
    ifstream B("54.txt"); // read operator 
    // B>>st2;
    getline(B,st2);
    cout<<st2;

    return 0;
}