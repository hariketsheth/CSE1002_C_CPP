/*
Inheritance_SciTech Publications
Scitech Publication House publishes two types of learning material, viz., Books and Recorded_CDs.  Both the Books and Recorded_CDs have ISBN_number, Title, Author, Year of publication and Price. In addition to this, Books contain the total number of pages and Recorded_CDs  contain duration of the video in minutes. Provide a functions to read and write details. Also provide a function:  calculate_Price which calculates the price of the Books based on the total number of pages, Re 1 per page and the price of Recorded_CDs based on the duration of the CD/DVD, Rs 2 per minute of the duration. Design an OOP model and implement it using C++. (Hierarchical inheritance)

Input Format

Type of learning material (0 for book and 1 for CD/DVD)

ISBN number

Title

Author

Year of publication

Number of pages if book, and the duration in minutes if CD/DVD

Output Format

ISBN number of book or CD/DVD

Title of book or CD/DVD

Cost of book or CD/DVD

Note  : if Input is Other than 0 or 1, then print "Invalid Input"
*/

/*
Name: Hariket Sukeshkumar Sheth
Topic: Inheritance
*/
#include <iostream>
using namespace std;

class Books{
    int ISBN, year, price;
    string title, author;
    public: 
    void read();
    void write();
    void calculate_Price(int i);
};
class Recorded_CDs : public Books{
    
};
void Books :: calculate_Price (int n){
    if(n==0)
        price = price * 1 ;
    else
        price = price * 2 ;
}
void Books :: read(){
    cin >> ISBN;
    cin >> title >> author;
    cin >> year >> price;
}
void Books :: write(){
    cout << ISBN << "\n" << title << "\n" << price ;
    
}

int main(){
    int n;
    cin>>n;
    switch(n){
        case 0:{
            Books B1;
            B1.read();
            B1.calculate_Price(n);
            B1.write();
            break;
        }
        case 1:{
            Recorded_CDs C1;
            C1.read();
            C1.calculate_Price(n);
            C1.write();
            break;
        }
        default:{
            cout << "Invalid Input" << endl;
            break;
        }
    }
}
