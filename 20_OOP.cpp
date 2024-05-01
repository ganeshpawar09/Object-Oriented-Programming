// Object Oriented Programming 


#include<iostream>
using namespace std;

// typedef struct student
// {
//     int id;
//     char name;
//     float salary;
// }st;

class Employee
{
private:
    int a,b,c;
public:
    int d,e;
    void setdata (int a1, int b1, int c1); //Declaration
    void getdata()  {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
    };
};

void Employee :: setdata(int a1, int b1 ,int c1){
    a=a1;
    b=b1;
    c=c1;
};
// void Employee ::getdata(){
//     {
//         cout<<a<<endl;
//         cout<<b<<endl;
//         cout<<c<<endl;
//         cout<<d<<endl;
//         cout<<e<<endl;
//     }
// };


int main(){
    Employee ganesh;
    ganesh.d=555;
    ganesh.e=34;
    ganesh.setdata(1,23,4);
    ganesh.getdata();
   

    return 0;
}