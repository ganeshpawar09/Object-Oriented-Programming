#include<iostream>
using namespace std;
int c=32;
int main(){
    int a,b,c;
    cout<<"The value of a :"<<endl;
    cin>>a;
    cout<<"The value of b :"<<endl;
    cin>>b;
    cout<<"The value of c :"<<endl;
    cin>>c;
    cout<<endl<< a+b+c<<endl;
    cout<<"local :"<<c<<endl;
    cout<<"Global :"<<::c;

    return 0;
}