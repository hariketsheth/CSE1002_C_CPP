/*
Nehru School has conducted an internal exam for all the students who are about to write Tenth Standard Board exam. Top scorers in all the classes are generally awarded during the School Annual day function. But the class teacher is very interested in encouraging other rank holders too.  Therefore, write a friend function to display the details of second top scorer (based on percentage of marks) in a class of ‘n’ students. Let a Student be represented by Rollno, Name, Marks (5 subjects marks in integers) and percentage.

Input Format:

Read number of students ‘n’
Read student Rollno, Name, Marks (5 subjects marks in integers)

Output Format:

Details of the second top scorer (based on percentage of marks) among ‘n’ students.

Boundary Conditions:

Numeric fields must be validated for their positive-ness otherwise print “Invalid input”*/

/*
Name: Hariket Sukeshkumar Sheth
Topic: Friend Functions
*/

#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
class Nehru{
    int rollno, marks[5];
    string name;
    float percentage;
    public:
        void getDetails(){
            cin>>rollno>>name;
            for(int i=0; i<5; i++){
                cin>>marks[i];
                if(marks[i]<0){
                    cout<<"Invalid input"<<endl;
                    exit(0);
                }
            }
        }
        void calculate(){
            int sum=0;
            for(int i=0;i<5;i++){
                sum+=marks[i];
            }
            percentage = (float) sum/5;
        }
        void sort (Nehru *N, int num){
            for(int i=0; i<num-1; i++){
                for(int j=0; j<num-i-1; j++){
                    if((N+j)->percentage < (N+j+1)->percentage){
                        Nehru *temp;
                        *temp = *(N+j);
                        *(N+j) = *(N+j+1);
                        *(N+j+1) = *temp;
                    }
                }
            }
        }
        friend class Second;
        
};

class Second{
    public:
    void display(Nehru *obj){
        if((obj+1)->rollno<1){
            cout<<"Invalid input"<<endl;
            exit(0);
        }
       cout<<(obj+1)->rollno<<endl;
        cout<<(obj+1)->name<<endl;
        for(int i=0;i<5;i++)
            cout<<(obj+1)->marks[i]<<endl;
        cout<<fixed<<setprecision(2)<<(obj+1)->percentage<<endl;
    }
};
int main(){
    int num;
    cin>>num;
    Nehru *N = new Nehru [num];
    for(int i=0; i<num;i++){
        (N+i)->getDetails();
        (N+i)->calculate();
    }
    Nehru T;
    T.sort(N,num);
    Second s1;
    s1.display(N);
}
