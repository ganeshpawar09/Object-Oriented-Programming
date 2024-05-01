#include<iostream>
using namespace std;

inline int product(int a,int b){
    return a*b;
}
int sum(int a, int b){

    // int c=1; this value is 0 every time no change in it
    static int c=0; //this executes only once
    c=c+1; //next time function is run with the values of  c=1,2,3,4,5and so on
    return a+b+c;
}

float moneyreceived(float currentmoney , float years, float factor=1.04){

    return currentmoney*factor*years;
}

int main(){
    int a,b;
    cout<<"Enter the values of a and b :"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<"The product of a and b is :"<<product(a,b)<<endl;
    cout<<sum(4,5)<<endl;
    cout<<sum(4,5)<<endl;
    cout<<sum(4,5)<<endl;
    cout<<sum(4,5)<<endl;
    cout<<sum(4,5)<<endl;
    cout<<sum(4,5)<<endl;
    cout<<sum(4,5)<<endl;
    cout<<sum(4,5)<<endl;
    cout<<sum(4,5)<<endl;
    cout<<sum(4,5)<<endl;
    cout<<sum(4,5)<<endl;

    cout<<moneyreceived(10000,4)<<endl;//factor value will be default value that 1.04
    cout<<moneyreceived(10000,4,10)<<endl;//10 is over write the default value 
    return 0;
}