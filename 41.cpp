#include<iostream>
using namespace std;

class b1{
    public:
    void greet(){
        cout<<"How are you?"<<endl;
    }

};


class b2{
    public:
    void greet(){
        cout<<"kaise ho?"<<endl;
    }

};


class derived: public b1 , public b2{
    int a;
    public:
    void greet(){
        b1::greet();
    }

};
int main(){
    b1 obj1;
    b2 obj2;
    obj1.greet();
    obj2.greet();

// ambibuity
    derived obj3;
    obj3.greet();




    return 0;
}