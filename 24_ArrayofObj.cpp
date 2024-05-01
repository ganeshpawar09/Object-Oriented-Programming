#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
    void setid(void){
        salary=122;
        cout<<"Enter the id of employee "<<endl;
        cin>>id;
    }
    void getid(void){
        cout<<"The id of Employee is "<<id<<endl;
    }
    
};

int main(){
    // Employee Ganesh ,yash, Atharva;
    // Ganesh.setid();
    // Ganesh.getid();
    int n;
    cout<<"Enter the number of employee:";
    cin>>n;

    Employee fb[n];
    for (int  i = 0; i < n; i++)
    {
        fb[i].setid();
    }
    for (int  i = 0; i < n; i++)
    {
        fb[i].getid();
    }

    
    return 0;
}