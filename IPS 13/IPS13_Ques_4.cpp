/*
Write a C++ program to perform arithmetic operations on two numbers and throw an exception if the dividend is zero or does not contain an operator.
case - 1 : if first number is 0, then throw an exception "Bad Operation"
case - 2 : if operator is other than '+', '-', '*', '/' then throw an exception "Not a Valid Operator"
case - 3 : if second number is 0, then throw an exception "Divide by Zero"
case - 4 : if operator is a number, then throw an exception "Exception Caught"

Input :
Read First Number (Num1)
Read an Operator (Op)
Read Second Number(Num2)

Output : Result ( Num1 Op Num2 : - 23 + 20 = 43 or 23 / 0 then throw exception)
*/

/* 
Name: Hariket Sukeshkumar Sheth
Topic: Exception Handling in CPP
*/
#include <iostream>
#include <cctype>
using namespace std;
void Arithmetic_Operation(int num1, char op, int num2)
{
    if(op=='+')
        cout<<num1+num2<<endl;
    else if(op=='-')
        cout<<num1-num2<<endl;
    else if(op=='*')
        cout<<num1*num2<<endl;
    else
        cout<<num1/num2<<endl;
}
int main(){
    int n1, n2;
    char op;
    try{
        cin>>n1>>op>>n2;
        if(n1==0)
            throw 1;
        else if(isdigit(op))
            throw "Exception Caught";
        else if(op!='+' && op!='-' && op!='*' && op!='/')
            throw 'a';
        else if(n2==0)
            throw 2;
        Arithmetic_Operation(n1,op,n2);
    }
    catch(const char* Msg){
        cout<<Msg<<endl;
    }
    catch(int t){
        if(t==1)
            cout<<"Bad Operation"<<endl;
        else
            cout<<"Divide by Zero"<<endl;
    }
    catch(char ch){
        cout<<"Not a Valid Operator"<<endl;
    }
}
