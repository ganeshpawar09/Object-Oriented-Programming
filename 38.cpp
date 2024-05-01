#include<iostream>
using namespace std;

class student{
    protected:
    int roll;
    public:
    void setnum(int a);
    void getnum(void);
    int rollnumber(void);
};
void student::setnum(int a){
    roll = a;
};


void student::getnum(void){
    cout<<"The roll number is "<<roll<<endl;
};
int student :: rollnumber(){
    return roll;
};

class exam:public student{
    protected:
    float maths;
    float physics;
    public:
    void setmarks(float , float );
    void getmarks(void);
};
void exam::setmarks(float a , float b){
    maths = a;
    physics =b ;
};
void exam::getmarks(){
    cout<<"The marks obtained in math are "<<maths<<endl;
    cout<<"The marks obtained in physics are "<<physics<<endl;
};

class reuslt :public exam{

    float percentage;
    public :
    void display(){
        getnum();
        getmarks();
        percentage=(maths+physics)/2;
        cout<<"The percentage of roll number "<<rollnumber()<<" is "<<percentage<<"%"<<endl;
    };



};;


int main(){
    reuslt s1;
    s1.setnum(23);
    s1.setmarks(99,90);
    s1.display();


    return 0; 
}

