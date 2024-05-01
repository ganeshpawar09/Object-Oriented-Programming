#include<iostream>
using namespace std; 

class student{
    protected:
    int roll;
    public:
    void set_number(int a){
        roll=a;
    };
    void print_number(void){
        cout<<"Your roll number is "<<roll<<endl;
    };
};

class test:virtual public student{
    protected:
    float math, physics;
    public:
    void set_marks(float m1, float m2){
        math=m1;
        physics = m2;
    }
    void print_marks(void){
        cout<<"Your result is:"<<endl
        <<"Maths :"<<math<<endl
        <<"Physics :"<<physics<<endl;
    }
};

class sports:virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score= sc;
    }
    void print_score(void){
        cout<<"PT :"<<score<<endl;
    }
};

class result:public test, public sports{
    protected:
    float total;
    public:
    void Display(){
        total = math+physics+score;
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is "<<total<<endl;

    }
};


int main()
{
    result GANESH;
    GANESH.set_number(5);
    GANESH.set_marks(99,93);
    GANESH.set_score(50);
    GANESH.Display();
     
    return 0;
}