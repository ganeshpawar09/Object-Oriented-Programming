// break and continue statements
#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i < 10; i++)
    {
        if (i==5){
            break;
        }
        cout<<i<<endl;

    }
    cout<<"This loop is break";
    for (int i = 0; i <10; i++)
    {
       
        if (i==5){
            continue;
        }
        cout<<i<<endl;
    }
     
    return 0;
}