// ***********case 1

// #include<iostream>
// using namespace std; 

// class base{
//     int data;
//     public:
//     base(int i){
//         data = i;
//         cout<<"Base class contructor called"<<endl;
//     }
//     void printdata(){
//         cout<<"The value of data is "<<data<<endl;
//     }
// };
// class base1{
//     int data1;
//     public:
//     base1(int i)
//     {
//         data1 = i;
//         cout<<"Base1 class contructor called"<<endl;
//     }
//     void printdata1()
//     {
//         cout<<"The value of data is "<<data1<<endl;
//     }
// };

// class derived: public base, public base1
// {
//     int derived1 ,derived2;
//     public:
//     derived(int a, int b , int c, int d): base(c), base1(d){
//         derived1 = a;
//         derived2 = b;
//         cout<<"Derived class constructor called"<<endl;
//     }
//     void printdata(){
//         cout<<"The value of data is "<<derived1<<endl
//         <<"The value of data is "<<derived2<<endl;
//     }
// };


// int main()
// {   
//     derived ganesh(1,2,5,3);
//     ganesh.printdata();
//     ganesh.printdata1();
//     ganesh.printdata1();
    
//     return 0;
// }


// ************** case 2

// #include<iostream>
// using namespace std; 

// class base{
//     int data;
//     public:
//     base(int i){
//         data = i;
//         cout<<"Base class contructor called"<<endl;
//     }
//     void printdata(){
//         cout<<"The value of data is "<<data<<endl;
//     }
// };
// class base1{
//     int data1;
//     public:
//     base1(int i)
//     {
//         data1 = i;
//         cout<<"Base1 class contructor called"<<endl;
//     }
//     void printdata1()
//     {
//         cout<<"The value of data is "<<data1<<endl;
//     }
// };

// class derived: public base, virtual public base1 //due to virtual base1 get privority
// {
//     int derived1 ,derived2;
//     public:
//     derived(int a, int b , int c, int d): base(c), base1(d){
//         derived1 = a;
//         derived2 = b;
//         cout<<"Derived class constructor called"<<endl;
//     }
//     void printdata(){
//         cout<<"The value of data is "<<derived1<<endl
//         <<"The value of data is "<<derived2<<endl;
//     }
// };


// int main()
// {   
//     derived ganesh(1,2,5,3);
//     ganesh.printdata();
//     ganesh.printdata1();
//     ganesh.printdata1();
    
//     return 0;
// }

// ************** case 3

// #include<iostream>
// using namespace std; 

// class base{
//     int data;
//     public:
//     base(int i){
//         data = i;
//         cout<<"Base class contructor called"<<endl;
//     }
//     void printdata(){
//         cout<<"The value of data is "<<data<<endl;
//     }
// };
// class base1{
//     int data1;
//     public:
//     base1(int i)
//     {
//         data1 = i;
//         cout<<"Base1 class contructor called"<<endl;
//     }
//     void printdata1()
//     {
//         cout<<"The value of data is "<<data1<<endl;
//     }
// };

// class derived: virtual public base, virtual public base1 
// {
//     int derived1 ,derived2;
//     public:
//     derived(int a, int b , int c, int d): base(c), base1(d){
//         derived1 = a;
//         derived2 = b;
//         cout<<"Derived class constructor called"<<endl;
//     }
//     void printdata(){
//         cout<<"The value of data is "<<derived1<<endl
//         <<"The value of data is "<<derived2<<endl;
//     }
// };


// int main()
// {   
//     derived ganesh(1,2,5,3);
//     ganesh.printdata();
//     ganesh.printdata1();
//     ganesh.printdata1();
    
//     return 0;
// }