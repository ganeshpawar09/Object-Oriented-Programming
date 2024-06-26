// Virtual function Example

#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base=1;
        virtual void display(){  //due to virtual 
            cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived=2;
            void display(){
                cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};

int main()
{
    BaseClass *baseclass_pointer;
    BaseClass A;
    DerivedClass B;
    baseclass_pointer = &B;
    baseclass_pointer->display();
    
    return 0;
}