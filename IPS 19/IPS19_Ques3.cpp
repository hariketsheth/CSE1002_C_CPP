Test Generic Programming
/*
Best friend of you is in need of a  program for his application to store a list of elements of Generic Data type, in which the data structure used should resemble the Queue properties (i.e First in First out or Last in Last out). So write a Psueudo code and subsequent C++ program to create a class called QUEUE with member functions Enqueue(), Dequeue(), Display() from the queue. Using the member functions, implement a queue of integers. Demonstrate the operations by displaying the contents of the queue after every operation.

Note : print "Queue is Empty", if n = 0;

Input Format:
Read N
Read Queue elements
Read (I/R/D) for Insertion(I), Deletion(R) and Display(D)

Output Format:

List after the Above Operations
*/

/*
Name: Hariket Sukeshkumar Sheth
Topic: Templates in CPP
*/
#include <iostream>
using namespace std;
template <typename T>
class QUEUE{
    T *r;
    public:
        void Enqueue(int *r, int num){
            int temp;
            cin>>temp;
            r[num] = temp;
            Display(r,num,1);
        }
        void Dequeue(int *r, int num){
            for(int i=1; i<num; i++)
                r[i-1] = r[i];
            Display(r,num,-1);
        }
        void Display(int *r, int num, int a=0){
            for(int i=0; i<num+a; i++)
                cout<<r[i]<<" ";
        }
};

int main(){
    int num;
    cin>>num;
    if(num==0)
        cout<<"Queue is Empty";
    else{
        int *r = new int [num+1];
        for (int i=0; i<num; i++)
            cin>>r[i];
        QUEUE<int> q;
        char choice;
        cin>>choice;
        switch(choice){
            case 'I':{
                q.Enqueue(r,num);
                break;
            }
            case 'R':{
                q.Dequeue(r,num);
                break;
            }
            case 'D':{
                q.Display(r,num);
                break;
            }
        }
    }
}
