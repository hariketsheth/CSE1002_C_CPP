/*
To Overload Sort()  method, write a cpp program and subsequent pseudo code to for 'n' Numbers and 'm' strings

Input : 

Read 'N' and 'M' Numbers (N - Number of Float Numbers, and M - Number of Strings)
Read 'N' Float Numbers and followed 'M' Strings
Output :

Print Sorted List of 'N' Float Numbers
Print Sorted List of 'M' Strings*/

/*
Name: Hariket Sukeshkumar Sheth
Topic: Function Overloading
*/
#include <iostream>
#include <cstring>
using namespace std;
class Sorted{
    public:
        void sort(float *F, int n){
            for(int i=0;i<n-1;i++){
                for(int j=0;j<n-i-1;j++){
                    if(F[j]>F[j+1]){
                        float temp;
                        temp = *(F+j);
                        *(F+j) = *(F+j+1);
                        *(F+j+1)= temp;
                    }
                }
            }
        }
        void sort(string *S, int m){
            for(int i=0;i<m-1;i++){
                for(int j=0;j<m-i-1;j++){
                    if(S[j] > S[j+1]){
                        string temp;
                        temp = *(S+j);
                        *(S+j) = *(S+j+1);
                        *(S+j+1) = temp;
                    }
                }
            }
        }
};
int main(){
    int n,m;
    cin>>n>>m;
    float *F = new float [n];
    string *S= new string[m];
    for(int i=0;i<n;i++)
        cin>>F[i];
    for(int i=0;i<m;i++)
        cin>>S[i];
    Sorted A1;
    A1.sort(F,n);
    A1.sort(S,m);
    for(int i=0;i<n;i++)
        cout<<F[i]<<endl;
    for(int i=0;i<m;i++)
        cout<<S[i]<<endl;
    
}
