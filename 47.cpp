#include<iostream>
using namespace std; 

class shop{
    int id ;
    float price ;
    public:
    void setdata(int a, float b){
        id =a;
        price =b;
    }
    void getdata(void){
        cout<<"Code of this item is "<<id<<endl
        <<"Price of this item is "<<price<<endl;
    }
};

int main()
{   
    int size =2;
    int p;
    float q;
    shop *ptr = new shop [size];
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter id and price of item "<<i+1<<":"<<endl;
        cin>>p;
        cin>>q;
        (*(ptr+i)).setdata(p,q);
        (*(ptr+i)).getdata();

    }
    

     
    return 0;
}