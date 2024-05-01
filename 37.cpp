#include<iostream>
using namespace std;

class base{
    protected: 
    int a;
    private:

    int b;


};
/*for a protected member 
                public derivation     private derivation     protected derivation

private m        Not inherited          Not inherited       Not inherited
protected m      protected              private               Protected 
public m         public                 private               Potected
*/ 


class derived : public base{


};


int main(){

    base b;
    derived d;
    // cout<<b.a;
    // cout<<d.a;


    return 0;   
}