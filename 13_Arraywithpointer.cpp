// array and pointer
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int mathmarks[4];
    mathmarks[0]=100;
    mathmarks[1]=106;
    mathmarks[2]=160;
    mathmarks[3]=180;
    mathmarks[4]=90;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<mathmarks[4]<<endl;
    cout<<endl<<endl<<endl;

    // Example of array which contain same type of containt means only int or only float
    int marks[5]={23,53,1313,235};
    marks[1]=9999;
    cout<<setw(4)<<marks[0]<<"  "<<&marks[0]<<endl;
    cout<<setw(4)<<marks[1]<<"  "<<&marks[1]<<endl;
    cout<<setw(4)<<marks[2]<<"  "<<&marks[2]<<endl;
    cout<<setw(4)<<marks[3]<<"  "<<&marks[3]<<endl<<endl<<endl;
    
    int *p=marks;
    cout<<*+p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl<<endl<<endl;
    cout<<p<<endl;
    cout<<(p+1)<<endl;
    cout<<(p+2)<<endl<<endl<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"Mathmarks "<<i<<" is  "<<mathmarks[i]<< endl;
    }
    cout<<endl<<endl<<endl;

    int i=0;
    while (i<4)
    {
        cout<<"Mathmarks "<<i<<" is  "<<mathmarks[i]<< endl;
        i++;
    }
    cout<<endl<<endl<<endl;
    int b=0;
    do
    {
        cout<<"Mathmarks "<<b<<" is  "<<mathmarks[b]<< endl;
        b++;
    } while (b<4);
    
    
    return 0;

}