/*
Write a C++ program to demonstrate the use of try, catch block with the argument as an integer and string using multiple catch blocks.
Exception handling means handling of abnormal or unexpected events.

Exception handling is done by 'try', 'catch', 'throw' keywords.
It transfers the control to special functions called Handlers and makes it easy to separate the error handling code.
Input :  First line : Read a Number

Output : if Number possitive and a Single Digit,  throw an exception to print "Single Digit Number", else through an Exception "Not a Single Digit Number" . if Number is negative, then throw an exception "Negative Number"
*/

/* 
Name: Hariket Sukeshkumar Sheth
Topic: Exception Handling in CPP
*/
#include <iostream>
using namespace std;
void Exception (int num){
    try{
        if (num<0)
            throw "Negative Number";
        else if(num>0 and num<10)
            throw 1;
        else
            throw 2;
    }
    catch(const char* Msg){
        cout<<Msg<<endl;
    }
    catch(int m){
        if(m==1)
            cout<<"Single Digit Number"<<endl;
        else
            cout<<"Not a Single Digit Number"<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    Exception(n);
}
