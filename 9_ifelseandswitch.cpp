// Control structure, if else and switch case statement

#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Tell me your age :";
    cin>>age;

// if else if else if ... else

    if ((age<18)&&(age>0)){
        cout<<"You can not drink this pepsi.";
    }
    else if (age==18){
        cout<<"You can drink this coca.";
    }
    else if (age<=0){
        cout<<"You are not born.";
    }
    else{
        cout<<"You can drink this water.";
    }


// Switch case statement

    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    default:
    cout<<"No special cases"<<endl;
        break;
    }

    cout<<"Done with switch case";
    return 0;
}