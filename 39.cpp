#include<iostream>
using namespace std;

// class derived: visibility mode base1 , visibility mode base2


class base1{
    protected:
    int base1int;
    public:
    void setbase1int(int a){
        base1int =a;
    }
    
};
class base2{
    protected:
    int base2int;
    public:
    void setbase2int(int a){
        base2int =a;
    }
    
};
class base3{
    protected:
    int base3int;
    public:
    void setbase3int(int a){
        base3int =a;
    }
    
};




class derived: public base2 , public base1, public base3{
    public:
    void show(){
        cout<<"The value of base1 is "<<base1int<<", base2 is "<<base2int<<" and base3 is "<<base3int<<endl;
    }

};

int main(){
    derived ganesh;
    ganesh.setbase1int(34);
    ganesh.setbase2int(45);
    ganesh.setbase3int(95);

    ganesh.show();

    return 0;
}