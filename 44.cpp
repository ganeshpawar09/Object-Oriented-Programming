#include<iostream>
using namespace std; 

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}*/
class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(j+i)
    // Test(int i, int j) : a(i), b(j+a)
    // Test(int i, int j) : a(i), b(j*3)
    // Test(int i, int j) : b(i),a(j)
    // Test(int i, int j) : b(j),a(i)
    Test(int i, int j) : b(j),a(i+b)// this gives error because we initialize a then b in public class


    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}