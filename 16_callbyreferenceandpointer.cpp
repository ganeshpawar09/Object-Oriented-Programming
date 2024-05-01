  // call by value and call by reference
#include<iostream>
using namespace std;

int sum(int a ,int b){
    int c =a+b;
    return c;
}
// This will not swap a and b
// void swap(int a ,int b){
//     int c= a;
//     a=b;
//     b=c;
// }

// call by reference by pointer
void swappointer(int * a ,int* b){
    int c= *a;
    *a=*b;
    *b=c;
}

// call by reference by reference varp
void swapreferencevar(int &a ,int &b){
    int c= a;
    a=b;
    b=c;
}
int main(){
    int a=45,b=55;
    cout<<"a:"<<a<<endl<<"b:"<<b<<"\nSum is "<<sum(a,b)<<endl;
    // swap(a,b);
    swappointer(&a,&b);
    cout<<"a:"<<a<<endl<<"b:"<<b<<"\nSum is "<<sum(a,b)<<endl;


    swapreferencevar(a,b);
    cout<<"a:"<<a<<endl<<"b:"<<b<<"\nSum is "<<sum(a,b)<<endl;
    
    
    
    return 0;
}