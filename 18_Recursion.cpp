#include<iostream>
using namespace std;

int fib(int b){
    if (b<2){
        return 1;
    }
    return fib(b-2)+fib(b-1);
}

int factorial(int a){
    if ((a==1 || a==0))
    {
        /* code */
        return 1;
    }
    return a*factorial(a-1);
    
}
int main(){
    // int a;
    // cout<<"Enter the number :";cin>>a;
    // cout<<factorial(a)<<endl;
    // cout<<fib(a)<<endl;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<fib(i)<<",";
    }
    

    return 0;
}