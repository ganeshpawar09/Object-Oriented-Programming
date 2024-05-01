// There are two types of header files
// 1 System header files: It comes with the compiler 
// 2 User defined header files : It is written by the programmer

#include<iostream>  // System header files: It comes with the compiler 

// #include"1.exe" // User defined header files : It is written by the programmer
using namespace std;
int main(){ 
    cout<<"This is hello world program";
    cout<<endl<<"Operators in c++:"<<endl;//Endl is use to go in next line
// Arithmetic operators
    int a= 55553, b=53;
    cout<<a<<"   "<<b<<endl<<endl;
    cout<<"Arithmetic operators"<<endl;
    cout<<"The value of a+b: "<<a+b<<endl;
    cout<<"The value of a-b: "<<a-b<<endl;
    cout<<"The value of a*b: "<<a*b<<endl;
    cout<<"The value of a/b: "<<a/b<<endl;
    cout<<"The value of a%b: "<<a%b<<endl;
    cout<<"The value of a++: "<<a++<<endl;
    cout<<"The value of a--: "<<a--<<endl;
    cout<<"The value of ++a: "<<++a<<endl;
    cout<<"The value of --a: "<<--a<<endl;

// Assignment operators --> Used to assign values to variable
    // int c=3,d=3;
    // char v='e';

// Comparion operator
    cout<<"Comparison Operator"<<endl;
    cout<<"a==b : "<<(a==b)<<endl;
    cout<<"a!=b : "<<(a!=b)<<endl;
    cout<<"a<=b : "<<(a<=b)<<endl;
    cout<<"a>=b : "<<(a>=b)<<endl;
    cout<<"a<b  : "<<(a<b)<<endl;
    cout<<"a>b  : "<<(a>b)<<endl;

// logical operators
    cout<<"a==b && a!=b : "<<((a==b) && (a!=b))<<endl;
    cout<<"a==b || a!=b : "<<((a==b) || (a!=b))<<endl;
    
    cout<<"a==b && a!=b : "<<not((a==b) && (a!=b))<<endl;
    cout<<"a==b || a!=b : "<<not((a==b) || (a!=b))<<endl;
    
    return 0;
}

