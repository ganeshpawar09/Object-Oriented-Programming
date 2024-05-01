#include<iostream>
using namespace std;

// forward declaration
class complex;

class calculator{
    public:
    int  add(int a, int b){
        return ( a+ b);
    }
    int sumRealcomplex(complex o1, complex o2);
    int sumUnrealcomplex(complex o1, complex o2);
    
};

class complex{
    int a;
    int b;

    // for indiviual function
    // friend int calculator :: sumRealcomplex(complex,complex);
    // friend int calculator :: sumUnrealcomplex(complex,complex);

    // for friend class
    friend class calculator;

    public:

    void setnumber(int n1 , int n2 ){
        a= n1;
        b= n2;
    }

    void additionoftwocomplex(complex m,complex n){
        a =m.a+n.a;
        b =m.b+n.b;
    }
    void printnumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int calculator::sumRealcomplex(complex o1, complex o2){
        return ((o1.a + o2.a));
    }
int calculator::sumUnrealcomplex(complex o1, complex o2){
        return ((o1.b + o2.b));
    }


int main(){
    complex o1,o2;
    calculator c4,c5;
    o1.setnumber(23,43);
    o2.setnumber(43,23);
    int r=c4.sumRealcomplex(o1,o2);
    int r1=c5.sumUnrealcomplex(o1,o2);
    cout<<r<<endl;
    cout<<r1<<endl;
    return 0;
}