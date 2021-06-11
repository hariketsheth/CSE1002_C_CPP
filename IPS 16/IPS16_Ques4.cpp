/*
To overload a function, Write the CPP Program and Subsequent Pseudo code to find  'N' Numbers and 'M' Characters

Example : for N=5, the numbers are 23,12,56,78, 6 and for M=6, 'P', 'A', 'n', 'C', 'Z', 'x', then the second largest number is 56 and second largest character is 'x'

INput :

Read the values of N and M
Next read 'N' Integer Numbers followed 'M' Characters,
Output:

Print Second Largest Integer Number
Print Second Largest Character*/
  
/*
Name: Hariket Sukeshkumar Sheth
Topic: Function Overloading
*/
#include <iostream>
using namespace std;
class Sort_Overload{
    public:
        void sort(int *N, int n){
            for(int i=0;i<n-1;i++){
                for(int j=0;j<n-i-1;j++){
                    if(N[j]<N[j+1]){
                        int temp;
                        temp = *(N+j);
                        *(N+j) = *(N+j+1);
                        *(N+j+1) = temp;
                    }
                }
            }
        }
        void sort(char *C, int m){
            for(int i=0;i<m-1;i++){
                for(int j=0;j<m-i-1;j++){
                    if(C[j]<C[j+1]){
                        char temp;
                        temp = *(C+j);
                        *(C+j) = *(C+j+1);
                        *(C+j+1) = temp;
                    }
                }
            }
        }
};
int main(){
    int n,m;
    cin>>n>>m;
    int *N = new int [n];
    char *C = new char [m];
    for(int i=0;i<n;i++)
        cin>>N[i];
    for(int i=0;i<m;i++)
        cin>>C[i];
    Sort_Overload A1;
    A1.sort(N,n);
    A1.sort(C,m);
    cout<<N[1]<<endl;
    cout<<C[1]<<endl;
    
}
