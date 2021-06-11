/*
Write a program using overloading of unary operator for inch to feet conversion. 12 inch = 1 feet.
For Example:
Input  :  2 49

Output : 6 1 
 

Input
First line contains the input for feet and inches separated by a space
Output
PRINT the correct converted values from inches to feet 
Processing Involved
Use the relation 
12 inch = 1 feet for conversion from inches to feet. 

Using the concept of Operator overloading for achieving the conversion. Unary Operator is overloaded to convert the solutions
Solution Alternatives
Algorithm/ Pseudocode
Step 1 : Declare a class Conversion with two private data members : feet and inch
Step 2: Declare and define 2 member functions : get_data() , operator - , put_data() for taking the user input for the values, for operator overloading and for printing the converted values

Step 3: The relation is given as: 12 Inches = 1 Feet. 
            Hence , adding the user input for inches / 12 and adding this value to the feet input 
            Since, inches / 12 quantity is converted to feet and used, the left value in the inches is initialized as inches % 12

Step 4: Using the put_data() member function printing the output.
*/

/*
Name: Hariket Sukeshkumar Sheth
Topic: Operator Overloading
*/

#include <iostream>
using namespace std;

class Conversion{
    int feet, inch;
    public:
        void get_data();
        Conversion operator - ();
        void put_data();
};

void Conversion :: get_data(){
    cin>>feet>>inch;
}
Conversion Conversion :: operator - (){
    feet += inch/12;
    inch = inch % 12;
}
void Conversion :: put_data(){
    cout<<feet<<"\n"<<inch<<endl;
}

int main(){
    Conversion c1;
    c1.get_data();
    -c1;
    c1.put_data();
}
