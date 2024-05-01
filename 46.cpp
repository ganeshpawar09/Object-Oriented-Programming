#include<iostream>
using namespace std; 

class complex{
    int real , imaginary;
    public:
    void getdata(int a ,int b){
        real=a;
        imaginary =b;

    }
    void showdata(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }
};

int main()
{
    // complex c1;
    // complex *ptr =&c1 ;
    // complex *ptr =new complex ;
    // (*ptr).getdata(43,53);
    // (*ptr).showdata();

    // ARROW OPERATOR

    // (*ptr).set data(43,53) is exactly same as
    // complex *ptr =new complex ;
    // ptr->getdata(1,54);
    // ptr->showdata();

    // Array operator
    complex *ptr1 =new complex[4] ;
    ptr1->getdata(1,54);
    ptr1->showdata();


    return 0;
}