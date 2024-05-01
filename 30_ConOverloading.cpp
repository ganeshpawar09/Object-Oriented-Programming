#include<iostream>
using namespace std;
class complex{
    int a, b , c;
    public:
    complex (int x , int y){
        a = x;
        b= y;
    }
    complex (int l  ){
        a = l;
        b= 0;
    }
    complex (){
        a = 0;
        b= 0;
    }
    void printnumber(){
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    
};
int main(){
    complex a(34,524) ,b(34), c ;
    a.printnumber();
    b.printnumber();
    c.printnumber();
}