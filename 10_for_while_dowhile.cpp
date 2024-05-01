// for, while and do-whileloops


#include<iostream>
using namespace std;
int main(){
    int Number;
    cout<<"Enter the number :";
    cin>>Number;
// //     // **********for loop***********

//     for (int i = 0; i < 4; i++)
//     {
//         cout<<i<<endl;
//     }
// // table
//     for (int i = 1; i < 11; i++)
//     {
//         cout<<Number<<"X"<<i<<" = "<<Number*i<<endl;
//     }
// // Reverse table
//     for (int i = 10; i > 0 ; i--)
//     {
//         cout<<Number<<"X"<<i<<" = "<<Number*i<<endl;
//     }

// // infinte loop
//     // for (int i = 0; i >= 0; i++)
//     // {
//     //     cout<<i<<endl;
//     // }
    

// // ***********While loop************


//     int i=1;
//     while (i<=10)
//     {
//         cout<<Number<<"  X  "<<i<<"  =  "<<Number*i<<endl;
//         i++;
//     }

// ***********do while loop**********


    int n=1;
    do
    {
       cout<<n<<endl;
       n++;
    } while (n<1);
    do
    {
        cout<<Number<<"  X  "<<n<<"  =  "<<Number*n<<endl;
        n++;
        
    } while (n<11);
    
    
    return 0;
}