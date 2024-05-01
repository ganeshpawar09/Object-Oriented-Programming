 #include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
// below line means that sum function is allowed to do anything with my private data
    friend complex sum(complex m, complex n);
    friend void print(complex z);
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
complex sum(complex m,complex n){
    complex o3;
    o3.setnumber((m.a+n.a),(m.b+n.b));
    return o3;
};
void print(complex z ){
        cout<<"Your genius"<<endl;
        cout<<"Your number is "<<z.a<<" + "<<z.b<<"i"<<endl;
    }

int main(){
    complex c1,c2,c3,c4;
    c1.setnumber(23,43);
    c1.printnumber();
    c2.setnumber(43,23);
    c2.printnumber();
    c3.additionoftwocomplex(c1,c2);
    c3.printnumber();
    c4= sum(c3,c2);
    c4.printnumber();
    print(c1);


    return 0;
}

/*
                    Properties of friend functions
 1. not in the scope of the class
 2. since it is not in the scope of the class, it cannot be called from the object of that
class  c1.sum() is invalid
3. can be invoked without the help of any object 
4. usually contain object as arguments
5. can be declared inside public or private section of the class 
6. it cannot accepts the member directly by the name and need object_name.member_name to
access any member.
*/ 
