#include <iostream>
using namespace std;

class Amazon
{
    int itemid[100];
    int itemprice[100];

public:
    // static int counter;
    int counter=1;
    // void initcounter(void) { counter = 1; }
    void setprice(void);
    void displayprice(void);
};
void Amazon ::setprice(void)
{
    cout << "Enter id of your item " << counter << endl;
    cin >> itemid[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}

void Amazon ::displayprice(void)
{
    for (int i = 1; i < counter; i++)
    {
        cout << "The price of item with id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}
// int Amazon:: counter;

int main(){
    cout << "Enter id and prices of Toys ";
    cout << endl<< endl;

    Amazon Toys;
    // Toys.initcounter();
    Toys.setprice();
    Toys.setprice();
    Toys.setprice();
    Toys.displayprice();

    cout << endl<< endl;

    cout << "Enter id and prices of Cloths ";
    cout << endl<< endl;
    
    Amazon Cloths;
    // Cloths.initcounter();
    Cloths.setprice();
    Cloths.setprice();
    Cloths.setprice();
    Cloths.displayprice();

    return 0;
}