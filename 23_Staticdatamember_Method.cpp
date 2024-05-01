#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;
    public:
    void setdata(void){
        cout<<"Enter id :";
        cin>>id; 
        count++;
    }
    void getdata(void){
        cout<<"The id is "<<id<<" of employee number is "<<count<<endl;
    }
    static void getcount(void){ //static member function
    // static member function only use static variable
        cout<<"The value of count is "<<count<<endl;
    }
};
int Employee :: count=100;//Default value is 0
// count is static data number 

int main(){
    Employee Ganesh;
    Ganesh.setdata();
    Ganesh.getdata();
    Ganesh.getcount();
    Employee::getcount();
    
    
    Employee Yash;
    Yash.setdata();
    Yash.getdata();
    Yash.getcount();


    Employee Mahesh;
    Mahesh.setdata();
    Mahesh.getdata();
    Employee::getcount();

    return 0;
}