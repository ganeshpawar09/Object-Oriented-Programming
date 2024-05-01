//Pointer to derived class 

#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived;
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
    baseclass_pointer = & B; //pointing base class pointer to derived class

    baseclass_pointer->var_base=34;
    // baseclass_pointer->var_derived=340;  this will thow error because it is pointer of base function
    baseclass_pointer->display();

    DerivedClass *derivedclass_pointer;

    derivedclass_pointer = & B;
    derivedclass_pointer->var_base=4000;
    derivedclass_pointer->var_derived = 499;
    derivedclass_pointer->display();
    return 0;
}