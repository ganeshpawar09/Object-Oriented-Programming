#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:

    Complex(int x, int y);
    void setdata(int m, int n){
        a=m;  
        b=n;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x , int y) 
{
    a = x; 
    b = y;
    // cout<<"Hello world"<<endl;
}
int main()
{ 
    // implicit call
    Complex c1(9,9);
    // c1.setdata(3,4);
    c1.printNumber();

    // Explicit call
    Complex b=Complex(5,7);
    b.printNumber();
 

   
    return 0;
}
