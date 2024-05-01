#include<iostream>
using namespace std;
int sum(int a,int b, int c){
    cout<<"three"<<endl;
    return a+b+c;
}
int sum(int a,int b){
    cout<<"two"<<endl;
    return a+b;
}

// volume of cylinder
int volume (int r,int h){
    return(3.14*r*r*h);
}

// volume of cube
int volume (int r){
    return(r*r*r);
}
// volume of rectangle
int volume (int l,int b,int h){
    return(l*b*h);
}
int main(){
    cout<<sum(4,5)<<endl;
    cout<<sum(4,5,6)<<endl;
    cout<<volume(4,5)<<endl;
    cout<<volume(40)<<endl;
    cout<<volume(4,5,6)<<endl;


    return 0;
}