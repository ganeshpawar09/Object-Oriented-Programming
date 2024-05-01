#include<iostream>
using namespace std;

class base{
    int data1; //private by default and is not inheritance
 
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();

};

void base::setdata(void){
    data1 =10;
    data2 =30;
};

int base ::getdata1(){
    return data1;
};

int base ::getdata2(){
    return data2;
};


class derived: private base{
    int data3;
    public:
    void process();
    void display();

};

void derived::process(){
    setdata();
    data3=data2*getdata1();
};
void derived::display(){
    cout<<getdata1()<<endl<<data2<<endl<<data3;
};


int main(){
    derived g;
    // g.setdata (); we can't use when visibility is private
    g.process();
    g.display();

    return 0;
}