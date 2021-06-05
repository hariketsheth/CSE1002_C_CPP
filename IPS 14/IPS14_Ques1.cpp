/*
Snow Howler is the crypto currency expert at the Centre of XYZ laboratory in  the city of HuskyLand. His job is to generate the list of prime numbers b/w 'm' and 'n' and store them in an array dynamically. As a friend of Snow Howler, help him by writing a C-Program and Subsequent pseudocode to generate the list of prime nubmers b/w 'm' and 'n'.

Input : 
Read two integers 'm' and 'n'

Output : 
List of Prime numbers b/w 'm' and 'n' and the size of an array.

Note : 
Use either malloc() or calloc() to allocate a memory dynamically as per the list of prime numbers b/w 'm' and 'n'. Finally use free() to release the memory allocated at the end of the program.

Example : 
if m=10, and n=30, then the size of an array is '6', because the prime numbers b/w 10 and 30 are 11,13,19, 17, 23, 29 .

Boundary Conditions : 
if 'm' or 'n' or both are -ve, then print "Negative Inputs"
*/
 
/* 
Name: Hariket Sukeshkumar Sheth
Topic: Dynamic Memory Allocation in CPP
*/
#include <iostream>
#include <cmath>
using namespace std;
class Prime{
    int n1;
    public:
        bool prime(int num){
            if(num>1){
                for(int i=2; i<=sqrt(num)+1; i++){
                    if(num%i == 0)
                        return false;
                }
                return true;
            }
            return false;
        }
        int create(Prime *p, int m, int n){
            int count = 0;
            for(int i = m; i<n; i++){
                if((p+i)->prime(i) == true){
                    (p+count)->n1 = i;
                    count += 1;
                }
            }
            return count;
        }
        void putDetails(){
            cout<<n1<<endl;
        }
};
int main(){
    int m,n, count;
    cin>>m>>n;
    if(m>0 && n>0){
        if(n<m){
            int temp = m;
            m = n;
            n = temp;
        }
        Prime *p = (Prime *) malloc ((n-m)*sizeof(Prime));
        Prime a;
        count = a.create (p,m,n);
        for(int i=0; i<count; i++){
            (p+i)->putDetails();
        }
        cout<<count<<endl;
        free(p);
    }
    else{
        cout<<"Negative Inputs"<<endl;
    }
}
