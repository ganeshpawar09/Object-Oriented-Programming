#include<bits/stdc++.h>
using namespace std;
class teacher
{
    int roll_number[100];
    int marks[100];
    int percentage[100];
    public:
    static int count;
    void setdata()
    {
        cout<<"Roll number:";cin>>roll_number[count];
        cout<<"Marks:";cin>>marks[count];
        cout<<"Percentage";cin>>percentage[count];
        count++;
    }
    void showdata()
    {
        for (int i = 0; i < count; i++)
        {
            cout<<setw(10)<<roll_number[i]<<setw(10)<<marks[i]<<setw(10)<<percentage[i]<<endl;
        }  
    }
};
int teacher:: count;


class principal: private teacher
{
    public:
    void show()
    {
        showdata();
    }
};


int main()
{
    teacher s1,s2,s3,s4,s5;
    principal p;
    s1.setdata();
    s2.setdata();
    p.show();
    return 0;
}