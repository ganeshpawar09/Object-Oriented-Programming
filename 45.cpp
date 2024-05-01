#include<iostream>
using namespace std; 

int main()
{
    int a =34 ;
    int*p =&a;
    cout<<*p<<","<<a<<endl
    <<"Address "<<p<<","<<&a<<endl;

    // new keyword also operator
    int *q=new int (40);
    cout<<"The value at address p is "<<*p<<endl;

    int *s=new int[4];
    s[0]=3434;
    s[1]=234;
    s[2]=13;
    s[3]=434;
    delete s;
    cout<<"The value of arr is "<<s[0]<<endl;
    cout<<"The value of arr is "<<s[1]<<endl;
    cout<<"The value of arr is "<<s[2]<<endl;

    // delete operator
 
    return 0;
}