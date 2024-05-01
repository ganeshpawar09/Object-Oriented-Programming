// Function and Function Prototype
#include<iostream>
using namespace std;


// int sum(int a, int b){
//     int c= a+b;
//     return c;
// }
// type function name (arguments);
int sum(long int a ,long int b); //this function prototype

void g(){
    cout<<"Hello Sir";
}
int main(){
    // x y are actual parameters
    long int a, b;
    cout<<"Enter the number :";
    cin>>a;
    cout<<"Enter the number :";
    cin>>b;
    cout<<endl<<"The sum of two number is "<<sum(a,b)<<endl;
    g();

    return 0;
}

// a,b are formal parameters 
int sum(long int a,long int b){
    long int c= a+b;
    return c;
}