// file I/O


#include<iostream>
#include<fstream>
using namespace std; 

int main()
{
   ofstream hout("55.txt");
   cout<<"Enter your name :";
   string name;
   cin>>name;
   hout <<"My name is "+name;
   hout.close();

   ifstream hin("55.txt");
   string st;
   getline(hin,st);
   cout<<st;
    return 0;
}