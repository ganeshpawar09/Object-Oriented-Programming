#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a Constructor
    // Constructor is a special member function with the same name as of the class.
    //It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created

    Complex(void); // Constructor declaration
    void setdata(int m, int n){
        a=m;  
        b=n;
    }
    void printNumber() 
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // ----> This is a default constructor as it takes no parameters
{
    a = 0; 
    b = 0;
    cout<<"Hello world"<<endl;
}
int main()
{
    Complex c1;
    // c1.setdata(3,4);
    c1.printNumber();
   
    return 0;
}

// it should be declared in the public section of the class
// they are automativally invoked whenever the object is created
// they cannot return values and do not have return type
// it can have default argument
// we cannot refer to their address
