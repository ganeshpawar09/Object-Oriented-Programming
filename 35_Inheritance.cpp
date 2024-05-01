#include<iostream>
using namespace std;

class employee{  //base class
    public:
    int id;
    float salary;

    employee(){};
    employee(int a, int b){
        id=a;
        b=salary;
        
    };
    


};
//derived class

// class (derived class name) : (visibility mode) (base class name)
// visibility mode means the members and functions of base class acts as private or public in derived class
// default visibility mode is private
// private visibility mode : public member of base become private member of the derived class
// public visibility mode : public member of base become public member of the derived class


// private members are never inherited

class programmer:public employee{
    public:
    programmer(int i , int n){
        id = i;
        salary =n;
    }
    int languagecode=9;
    void getdata(void){
        cout<<id<<"  "<<salary<<"  "<<languagecode<<endl;
    }

    

};


int main(){
    employee Ganesh(1223,3434);
    cout<<Ganesh.id<<endl;
    programmer ganesh(323,23);
    ganesh.getdata();
    cout<<ganesh.id;
    




    return 0;
}