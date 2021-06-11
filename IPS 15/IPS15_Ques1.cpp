/*
Write a C++ Program and Subsequent Pseudo Code to print the student details applied for VITEE Examinations. Define a Class STUDENT, with required  Private Data members to store the information about a student. Now define atlease one nonmember function as a friend  to a class STUDENT either  to read or print the student details.

Input : Student_No, Student_Name, Student_Age, Student_Sex, Student_Plus12Marks, Student_Address, Student_MobleNo.
Output : Student_No, Student_Name, Student_Age, Student_Sex, Student_Plus12Marks, Student_Address, Student_MobleNo, Eligible/Not Eligible

Note : Student_Name Contains F_Name, M_Name, L_Name; and if Student_Plus12Makrs is > 800 then Print "Eligible" otherwise print "Not Eligible"*/

/*
Name: Hariket Sukeshkumar Sheth
Topic: Friend Functions
*/

#include <iostream>
using namespace std;
class Student{
    int Student_Age, Student_Plus12Marks;
    string Student_MobileNo;
    char Student_Sex, Student_Name[100];
    string Student_No, Student_Address;
    public:
        void getDetails(){
            cin>>Student_No;
            int size = 100;
            cin.ignore();
            cin.getline(Student_Name,size);
            cin>>Student_Age>>Student_Sex;
            cin>>Student_Plus12Marks>>Student_Address;
            cin>>Student_MobileNo;
        }
        friend void putDetails(Student s);
    
};
void putDetails (Student s){
    cout<<s.Student_No<<endl;
    cout<<s.Student_Name<<"\n"<<s.Student_Age<<endl;
    cout<<s.Student_Sex<<"\n"<<s.Student_Plus12Marks<<endl;
    cout<<s.Student_Address<<"\n"<<s.Student_MobileNo<<endl;
    if(s.Student_Plus12Marks>800)
        cout<<"Eligible"<<endl;
    else
        cout<<"Not Eligible"<<endl;
    
}
int main(){
    Student A;
    A.getDetails();
    putDetails(A);
}
