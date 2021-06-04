/*
A police camp is recruiting the trainees by measuring the parameters such as height, age, and chest.  The minimum eligibility for selection is based on the following conditions:
-Height should be between 5.2 to 5.6 inches
-Age should be greater than 18 and less than 25
-Chest should be greater than 45 cm
Write an inline function to find whether the person is fit for the police or not. Print “Selected“ when criteria is satisfied and print “Not selected” when criteria are not satisfied. Raise an exception when age is entered negative. Print “Negative age”  when the exception raises.

Input Format:
Read height
Read age
Read chest

Output Format:
If the person is fit then print 'Selected'
Otherwise, print 'Not selected'

Boundary Conditions:
All input >0
*/

/* 
Name: Hariket Sukeshkumar Sheth
Topic: Exception Handling in CPP
*/
#include <iostream>
using namespace std;
inline void police_camp(float height, int age, int chest){
    try{
        if(age>18 && age<25){
            if(height>5.2 && height<5.6){
                if(chest > 45){
                    throw "Selected";
                }
                throw "Not Selected";
            }
            throw "Not Selected";
        }
        else if(age<0){
            throw 1;
        }
        
        throw "Not Selected";
    }
    catch(int n){
        cout<<"Negative age";
    }
    catch(const char* Msg){
        cout<<Msg<<endl;
    }
}
int main(){
    float height;
    int age, chest;
    cin>>height>>age>>chest;
    police_camp(height,age,chest);
}
