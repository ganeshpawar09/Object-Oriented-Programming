#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=34;
    cout<<a<<endl;
    a=4;
    cout<<a<<endl;


// constant in C++
    const int b=4;
    cout<<b<<endl;
    //b=43; //this give error 
    cout<<b<<endl;

// Manipulators in c++

// setw

    int x=4;
    int y=34;
    int z=345;
    cout<<"The value of without setw is :"<<x<<endl;
    cout<<"The value of without setw is :"<<y<<endl;
    cout<<"The value of without setw is :"<<z<<endl;


    cout<<"The value of is :"<<setw(10)<<x<<endl;
    cout<<"The value of is :"<<setw(10)<<y<<endl;
    cout<<"The value of is :"<<setw(10)<<z<<endl;

// operator precedance
// search on google
    int m=4 , n=5; 
    int c=m*5+n*.5;
    cout<<c;
    

   return 0;
}