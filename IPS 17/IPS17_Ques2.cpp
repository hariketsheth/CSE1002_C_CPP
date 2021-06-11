/*
Write a C++ program to design an Item class with two fields—one that holds the name of the item, the other that holds the quantity of the item. Include an overloaded operator “+” function that allows you to add two Item objects. Adding two Item objects means adding their quantity and creating a summary Item object in which you store “Total_Quantity” of all the items.

Input Format:

Name of the item.

Quantity of the item.

Output Format:

Total quantity of the item*/

/*
Name: Hariket Sukeshkumar Sheth
Topic: Operator Overloading
*/

#include <iostream>
using namespace std;
class Item{
    string name;
    int quantity;
    public:
        void get_data();
        void operator + (Item temp);
        
};
void Item :: get_data(){
    cin>>name;
    cin>>quantity;
}
void Item :: operator + (Item temp){
    cout<<quantity + temp.quantity<<endl;
}

int main(){
    Item i1, i2;
    i1.get_data();
    i2.get_data();
    i1 + i2;
}


