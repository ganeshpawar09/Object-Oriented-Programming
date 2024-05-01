 // OOPs --> classes and objects

    // c++ -->  initially called --> c with classes by bjarne stroustroup
    // classes --> extension of structures in c
    // structures had limitations
    //     - members are public
    //     - No methods
    
    // classes --> strutures + more
    // classes --> can have methods and properties 
    // classes --> can make few members as private and public
    
    // structures in c++ are typedef
    // you can declare objects along with the class declaration like this:
    // class employee{
    //     class definition 
    // }ganesh,rohan,lovish
    // ganesh.salary=8 makes no sence if salary is private

#include<iostream>
#include<string>
using namespace std;


class binary{
    private:
    string s;
    void read(void);
    void chk_bin(void);

    public:
    void onescom(void);
};

void binary::read(void){
    cout<<"Enter a binary number :";
    cin>>s;
};
void binary::chk_bin(void){
  
    read();
    for (int i=0 ; i<s.length(); i++){
        if (s.at(i)!='0' && s.at(i)!= '1')
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
        
    }
};

void binary::onescom(void){
    chk_bin();//this nestig of function also we can use chk bin as private because
        	    // some function use this automatically we cannot use manually
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            cout<<1;
        }
        if (s.at(i)=='1')
        {
            cout<<0;
        }
        
    }
    
};

int main(){
    binary b;
    // b.read();
    // b.chk_bin();
    b.onescom();
   
    return 0;
}