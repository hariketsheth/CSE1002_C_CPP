/*Test Inheritance
Create two classes named Mammals and MarineAnimals. Create another class named BlueWhale which inherits both the above classes. Now, create a function in each of these classes which prints "I am Mammal", "I am Marine Animal" and "Iam BlueWhale" respectively. Now, create an object for each of the above class and try calling
1 - function of Mammals by the object of Mammal
2 - function of MarineAnimal by the object of MarineAnimal
3 - function of BlueWhale by the object of BlueWhale
4 - function of each of its parent by the object of BlueWhale

Implement the above scenario based on user choice (1/2/3/4/5)

Note : if Choice = 5, print "Invalid Input"
*/

/*
Name: Hariket Sukeshkumar Sheth
Topic: Inheritance
*/
#include <iostream>
using namespace std;
class Mammals{
    public:
        void print(){
        	string str1 = "Iam Mammal";
            cout<<str1<<endl;
        }
};
class MarineAnimals{
    public:
        void print(){
        	string str2 = "Iam MarineAnimal";
            cout<<str2<<endl;
        }
};
class BlueWhale : public Mammals, public MarineAnimals{
    public:
        void print(){
            string str3 = "Iam BlueWhale";
            cout<<str3<<endl;
        }
};
int main(){
    int choice;
    cin>>choice;
    switch(choice){
        case 1:{
            Mammals M;
            M.print();
            break;
        }
        case 2:{
            MarineAnimals MA;
            MA.print();
            break;
        }
        case 3:{
            BlueWhale BW;
            BW.print();
            break;
        }
        case 4:{
            BlueWhale BW;
            BW.Mammals::print();
            BW.MarineAnimals::print();
            break;
        }
        default:{
            cout<<"Invalid Input"<<endl;
            break;
        }
    }
}
