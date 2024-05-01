// Structure , unions and enums
#include<iostream>
using namespace std;
typedef struct Employee
    {
        int id;
        char favchar;
        float salary;
        void getdata(){
            cout<<"id is "<<id<<endl;
        }
    }ep;

union money //it provide better memory management 
{
    // Only one value can be set form this
    int Workingtime;
    char favchar;
    float rupees;
};

int main(){
    // struct Employee Ganesh;
    // ep Yash;
    // Ganesh.id=104022;
    // Ganesh.favchar='g';
    // Ganesh.salary=11111111.00;
    // // cout<<Ganesh.id<<endl<<Ganesh.favchar<<endl<<Ganesh.salary;
    // Ganesh.getdata();
    
    // Yash.id=1040234;
    // Yash.favchar='y';
    // Yash.salary=1.00;
    // cout<<Yash.id<<endl<<Yash.favchar<<endl<<Yash.salary<<endl<<endl<<endl;
    
    // union money Gan;
    // Gan.Workingtime=23;
    // Gan.favchar='b';
    // cout<<Gan.Workingtime<<endl<<Gan.favchar<<endl<<endl<<endl;

    enum meal{Breakfast,Lunch=400,Dinner};
    // we can attach the number with name
    meal m1=Lunch;
    cout<<m1<<endl;
    // cout<<(m1==1)<<endl;
    cout<<Breakfast<<endl;
    cout<<Lunch<<endl;
    cout<<Dinner<<endl;
    return 0;
}