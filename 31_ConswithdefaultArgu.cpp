#include<iostream>
using namespace std;

class simple{
    int d1;
    int d2;
    public:
    simple(int a ,int b=9){
        d1=a;
        d2=b;
    }
    void printdata();
};
void simple:: printdata(){
    cout<<d1<<","<<d2<<endl;

};



int main(){
    simple s(43,434);
    s.printdata();
    simple s1(43);
    s1.printdata();
}