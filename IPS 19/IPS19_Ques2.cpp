/*
KVP_ClassTemplate
Write a CPP Program to sort list of 'N' Integers or List of 'N' Characters using Generic Class Templates

Input :

First line must read choice (1 or 2) (1 - Integers or 2 - Characters)

Second Line read the value of 'N' 

Thrid Line read 'N' Intergers / Characters based on Choice 

Output:

List of Sorted Elements (Integer / Characters)
*/
 
/*
Name: Hariket Sukeshkumar Sheth
Topic: Templates in CPP
*/

#include <iostream>
using namespace std;

template <class T>
void sort(T *r, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(r[j]>r[j+1]){
                T temp = r[j];
                r[j] = r[j+1];
                r[j+1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++)
        cout<<r[i]<<endl;
}
int main(){
    int choice,num;
    cin>>choice>>num;
    switch(choice){
        case 1:{
            int *r = new int [num];
            for(int i=0; i<num; i++)
                cin>>r[i];
            sort(r,num);
            break;
        }
        case 2:{
            char *r = new char [num];
            for(int i=0; i<num; i++)
                cin>>r[i];
            sort(r,num);
            break;
        }
    }
}
