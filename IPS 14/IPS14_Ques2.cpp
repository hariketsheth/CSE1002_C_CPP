/*
Consider a Class Student with the instance(Data Members) variables Student_Id, Student_Name, Student_Age, Student_CGPA and One Static member College as private.
and two member methods getDetails() and putDetails() to read and write the above said instance variables as public. Write a C++ Program and subsequent pseudocode for the above said class Student to print the sorted list(Descending) of student details based on the CGPA.

Note : Use new() and delete() operators to allocate and deallocate the memory for array of objects.
Make College = "VIT-Chennai" as static.

Boundary Conditions : if 'N' is -ve, print "Invalid Input"

Input:
First line must read the value of 'N' (No. of Students)
Second line onwards read the details of 'N' Students as below
Student_Id, Student_Name, Student_Age, Student_CGPA.

Output:
List all the Students Details in an Descending order based an CGPA.
*/

/*
Name: Hariket Sukeshkumar Sheth
Topic: Dynamic Memory Allocation in CPP
*/
#include <iostream>
using namespace std;

class Student{
    int Student_ID, Student_age;
    string Student_name;
    float Student_CGPA;
    static string college;
    
    public:
        void get_Details(){
            cin>>Student_ID>>Student_name>>Student_age>>Student_CGPA;
        }
        void put_Details(){
            cout<<Student_ID<<endl;
            cout<<Student_name<<endl;
            cout<<Student_age<<endl;
            cout<<Student_CGPA<<endl;
            }
        void sort (Student *stud, int num){
            for(int i=0; i<num-1; i++){
                for(int j=0; j<num-i-1;j++){
                    if((stud+j)->Student_CGPA < (stud+j+1)->Student_CGPA){
                        Student *temp;
                        *temp = *(stud+j);
                        *(stud+j) = *(stud+j+1);
                        *(stud+j+1) = *temp;
                    }
                }
            }
        }
    
};
string Student :: college = "VIT-Chennai";
int main(){
    int num;
    cin>>num;
    if(num<0){
        cout<<"Invalid Input";
    }
    else{
        Student *s = new Student[num];
        for(int i=0;i<num;i++){
            (s+i)->get_Details();
        }
        Student a;
        a.sort(s,num);
        cout<<"\n\n\n\n"<<endl;
        for(int i=0; i<num;i++){
            (s+i)->put_Details();
        }
        delete []s;
    }
}
