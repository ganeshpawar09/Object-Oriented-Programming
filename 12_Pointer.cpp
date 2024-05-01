// Pointer --> Data type which holds the address of other data types


#include<iostream>
using namespace std;
int main(){
    int a=3;
    int *b=&a;
    int **c=&b;
    int ***d=&c;
    // & --> address of operator 
    cout<<"Address of a is "<<b<<endl;
    cout<<"Address of a is "<<&a<<endl;


    // * --> dereferene of operator
    cout<<"The value at address b is "<<*b<<endl;


    // & --> address of operator 
    cout<<"Address of a is "<<&b<<endl;
    cout<<"Address of a is "<<c<<endl;


    // * --> dereferene of operator
    cout<<"The value at address b is "<<**c<<endl;

    // & --> address of operator 
    cout<<"Address of a is "<<&c<<endl;
    cout<<"Address of a is "<<d<<endl;


    // * --> dereferene of operator
    cout<<"The value at address d is "<<***d<<endl;


    return 0;
}