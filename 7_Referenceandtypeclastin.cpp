#include<iostream>
using namespace std;
int c=3434;
int main(){
    int m,h,c;
    cout<<"Enter the number :";
    cin>>m;
    cout<<"Enter the number :";
    cin>>h;
    c= m+h;
    cout<<endl<<"Sum is :"<<c;
    cout<<endl<<"Global is  :"<<::c;


    float d=34.23f;
    long double e=34.23;
    cout<<"The size of 34 is :"<< sizeof(34)<<endl;
    cout<<"The size of 34.23f is :"<< sizeof(34.23f)<<endl;
    cout<<"The size of 34.23F is :"<< sizeof(34.23F)<<endl;
    cout<<"The size of 34.23l is :"<< sizeof(34.23l)<<endl;
    cout<<"The size of 34.23L is :"<< sizeof(34.23L)<<endl;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;


// ***********Reference Variable**************
    float z =343113;
    float & y=z;
    // cout<<z<<endl;
    cout<<y<<endl;

// Type casting

    int a =45;
    float b=45.5454;
    cout<<a;
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of a is "<<(float)a<<endl;

    cout<<b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;

    cout<<"Sum is "<<int(a + b)<<endl;
    cout<<"Sum is "<<a + b<<endl;
    cout<<"Sum is "<<a + (int)b<<endl;
    cout<<"Sum is "<<a + int(b)<<endl;

    return 0;
}