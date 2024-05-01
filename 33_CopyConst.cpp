#include<iostream>
using namespace std;

class number{
    int a;
    public:
    number(){
        a=0;
    };   
    number(int num){
        a= num;
    } 

// When no copy constructor is found, compiler supplies its own copy constructor
    number(number &obj){
        cout<<"copy construstor"<<endl;
        a= obj.a;
    }
 

    void display(){
        cout<<"The number for this object is "<<a<<endl;
    }

};


int main(){
    number z(43);
 
    z.display();

    number z1(z);//copy constructor invoke
    z1.display();

    number z2=z;//copy constructor not called
    z2.display();

    number z4=z;
    z4.display();//copy constructor invoke



    return 0;
}