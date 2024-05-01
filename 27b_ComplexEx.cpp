#include<iostream>
using namespace std;
class y;
class x{
    int val;
    friend void call(x &, y &);
    public:
    void indata(int a){
        val=a;
    }
    void display(void){
        cout<<val<<endl;
    }

};
class y{
    int val2;
    friend void call(x &, y &);
    

    public:
    void indata(int a){
        val2=a;
    }
    void display(void){
        cout<<val2<<endl;
    }
};

void call(x & x,y & y){
    int tem= x.val;
    x.val= y.val2;
    y.val2=tem;
   

}
int main(){
    x a;
    y b;
    a.indata(12);
    b.indata(34);
    a.display();
    cout<<endl;
    b.display();


    return 0;
}