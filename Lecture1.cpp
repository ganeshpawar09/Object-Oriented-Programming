#include<bits/stdc++.h>
using namespace std; 
class hero
{
    string name;
    int hitpoint;
    int level;

    public: 
    static int timeTocomplete;

    hero()
    {
        cout<<"Address of the object who is invoking me is: "<<(this)<<endl;
    }
    hero(string name)
    {
        this->name=name; 
    }

    hero(hero &obj) //there is also inbult copy constructure
    {
        name=obj.name;
        hitpoint=obj.hitpoint;
        level=obj.level;
    }

    ~hero()
    {
        cout<<"Destructor invoke"<<endl;
    }
   
    // setter 
    void set_name(string name)
    {
        this->name=name;
    }
    void set_hitpoint(int hitpoint)
    {
        this->hitpoint=hitpoint;
    }
    void set_level(int level)
    {
        this->level=level;
    }

    // getter 
    string get_name()
    {
        return name;
    }
    int get_hitpoint()
    {
        return hitpoint;
    }
    int get_level()
    {
        return level;
    }
    
    // static function

    static void print_time()
    {
        cout<<timeTocomplete<<endl;
        timeTocomplete--;
    }

};

int hero::timeTocomplete(10);

int main()
{
    // ***************************static allocation

    hero h1;
    h1.set_name("Ganesh");
    h1.set_hitpoint(100);
    h1.set_level(10);
    // cout<<"Info of player H1"<<endl<<setw(10)<<"Name: "<<setw(10)<<h1.get_name()<<endl<<setw(10)<<"Hitpoint: "<<setw(10)<<h1.get_hitpoint()<<endl<<setw(10)<<"Level: "<<setw(10)<<h1.get_level()<<endl;
    
     // ***************************************dynamic allocation

    hero *h2=new hero;
    // (*h2).set_name("GOku"); 
    // (*h2).set_hitpoint(100);
    // (*h2).set_level(10);

    h2->set_name("GOKU");
    h2->set_hitpoint(100);
    h2->set_level(10);

    // cout<<"Info of player H1"<<endl<<setw(10)<<"Name: "<<setw(10)<<h2->get_name()<<endl<<setw(10)<<"Hitpoint: "<<setw(10)<<h2->get_hitpoint()<<endl<<setw(10)<<"Level: "<<setw(10)<<h2->get_level()<<endl;
    
    // in this condition when we write h2.set is wrong because h2 stores the address 
    // so we have  write as (*h2).setname or h2->setname  ->mean point the value at this pointer 

    // *************************this pointer 
    hero h3;
    cout<<"Address of h3:  "<<&h3<<endl;

    hero *h4=new hero;
    cout<<"Address of h3:  "<<h4<<endl;

    hero h5("Ganesh");
    cout<<h5.get_name()<<endl;
    

    //**************************copy constructor


    hero h6;
    h6.set_name("Iron man");
    h6.set_hitpoint(1000);
    h6.set_level(10);

    hero h7(h6); 
    cout<<"Info of player H1"<<endl<<setw(10)<<"Name: "<<setw(10)<<h6.get_name()<<endl<<setw(10)<<"Hitpoint: "<<setw(10)<<h6.get_hitpoint()<<endl<<setw(10)<<"Level: "<<setw(10)<<h6.get_level()<<endl<<endl;
    cout<<"Info of player H1"<<endl<<setw(10)<<"Name: "<<setw(10)<<h7.get_name()<<endl<<setw(10)<<"Hitpoint: "<<setw(10)<<h7.get_hitpoint()<<endl<<setw(10)<<"Level: "<<setw(10)<<h7.get_level()<<endl<<endl;

    hero h8; // destructor invoke for static allocation is automatic
    hero *h9 =new hero; // for dynamic we have delete it manualy
    delete h9;

    //***********************static keyword

    cout<<hero::timeTocomplete<<endl; //static member is belong to class
    //so try to print like this 

    //***********************static function
    hero:: print_time();
    hero:: print_time();

    return 0;
}
