/*
Write a C program and subsequent pseudocode to find the sum of even numbers and sum of odd numbers separately by defing 2 separate functions Sum_Even() and Sum_Odd() from a given list of integer elements. Use dynamic memory allocation to allocate a memory of array for 'n' elements.
Note :

1. pass 'Array' as an argument in the defined functions Sum_Even(), Sum_Odd().
2. allocate memory dynamically using either malloc() or calloc(). finally relase it using free();

Input Format: 
Array size ('n') followed a list of 'n' elements into an array.

Output Format: 
Sum of Even numbers, Sum of Odd Numbers

TestCase-1 -  
Input : 
if 'n' = 9, then the list of elements in an array are 1,2,3,4,5,6,7,8,9
Output : 20 (i.e - 2+4+6+8), 25 (i.e - 1+3+5+7+9) 

TestCase-2 : 
if 'n' is -ve, then print "Invalid Input"
*/

/*
Name: Hariket Sukeshkumar Sheth
Topic: Dynamic Memory Allocation in CPP
*/
#include <iostream>
using namespace std;
class EvenOdd{
    int n;
    public:
        void getDetails(){
            cin>>n;
        }
        void putDetails(){
            cout<<n<<endl;
        }
        int* segregate(EvenOdd *numbers, EvenOdd *Even, EvenOdd *Odd, int num){
            int count_e = 0, count_o = 0;
            int *temp; 
            for(int i=0; i<num; i++){
                if((numbers+i)->n % 2 ==0){
                    (Even+count_e)->n = (numbers+i)->n;
                    count_e +=1;
                }
                else{
                    (Odd+count_o)->n = (numbers+i)->n;
                    count_o +=1;
                }
            }
            *(temp+0) = count_e;
            *(temp+1) = count_o;
            return temp;
        }
        void EvenSum(EvenOdd *Even, int count){
            int sum = 0;
            for(int i=0; i<count; i++){
                sum += (Even+i)->n;
            }
            cout<<sum<<endl;
        }
        void OddSum(EvenOdd *Odd, int count){
            int sum = 0;
            for(int i=0; i<count; i++){
                sum+= (Odd+i)->n;
            }
            cout<<sum<<endl;
        }
};
int main(){
    int num;
    cin>>num;
    if(num<0){
        cout<<"Invalid Input"<<endl;
    }
    else{
        EvenOdd *numbers = (EvenOdd *) malloc (num*sizeof(EvenOdd));
        EvenOdd *Even = (EvenOdd *) calloc(num, sizeof(EvenOdd));
        EvenOdd *Odd = (EvenOdd *) malloc (num*sizeof(EvenOdd));
        for(int i = 0; i<num; i++){
            (numbers+i)->getDetails();
        }
        EvenOdd a;
        int *temp;
        temp = a.segregate(numbers,Even,Odd,num);
        a.EvenSum(Even, *(temp+0));
        a.OddSum(Odd, *(temp+1));
    }
}
