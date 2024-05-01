#include<iostream>
using namespace std;
class y;

class x{
    friend void add(x,y);
    int data;
    public:
    void setvalue(int value){
        data= value;
    }
};

class y{
    friend void add(x,y);
    int num;
    public:
    void setvalue(int value){
        num= value;
    }

};

void add(x o1, y o2){
    cout<<o1.data+o2.num;
};

int main(){
    x a;
    a.setvalue(3);
    y b;
    b.setvalue(5);
    add(a,b);
    
    return 0;
}

