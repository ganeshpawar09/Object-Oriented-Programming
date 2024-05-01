#include<iostream>
#include<math.h>
using namespace std;

class point{
    int x;
    int y;
    public:
    point(int a,int b){
        x=a;
        y=b;
    }
    void displaypoint(void){
        cout<<"The point is "<<"("<<x<<","<<y<<")"<<endl;
    }
    void distance(point a, point b){
        cout<<"The Distance between two point is "<<sqrt((b.x-a.x)*(b.x-a.x)+(b.y -a.y)*(b.y -a.y))<<endl;
    }
};
int main(){
    point a(1,1) ,b(0,0),c(0,0);
    a.displaypoint();
    c.distance(a,b);



    return 0;
}