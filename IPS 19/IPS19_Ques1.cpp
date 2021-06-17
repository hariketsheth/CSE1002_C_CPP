/*
KVP_GenericTemplates
Given a set of 'n' elements and 'r', write a generic function to right shift the set of elements by 'r' position. If the elements are moved to the position that is greater than ‘n’ then wrap the shift process to the beginning of the collection. For example, if the set of five elements are 1,7,8,9,12 and value of 'r' is 3 then the set of elements would be 8, 9, 12, 1, 7.Given a set of 'n' elements and 'r', write a generic function to right shift the set of elements by 'r' position. If the elements are moved to the position that is greater than ‘n’ then wrap the shift process to the beginning of the collection. For example, if the set of five elements are 1,7,8,9,12 and value of 'r' is 3 then the set of elements would be 8, 9, 12, 1, 7.

Input :

Choice of data type (1 for integer and 2 for string)

Number of elements in the collection

Element1 in the collection

Element2 in the collection

....

Elementn in the collection

Value for 'r'

Output :

Elements in the collection after right shift

Element1

Element2

...

Elementn
*/

/*
Name: Hariket Sukeshkumar Sheth
Topic: Templates in CPP
*/

#include <iostream>
using namespace std;
template <class T>
void right_shift (T *r, int n, int k){
    while(k>0){
        T temp = r[0];
        for(int i=1; i<n; i++ )
            r[i-1] = r[i];
        r[n-1] = temp;
        k--;
    }
    for(int i=0; i<n; i++)
        cout<<r[i]<<endl;
}
int main(){
    int choice, num,k=0;
    cin>>choice>>num;
    if(choice==2){
        string *r = new string [num];
        for(int i=0; i<num; i++)
            cin>>r[i];
        cin>>k;
        right_shift(r,num,k-2);
    }
    else{
        int *r = new int [num];
        for(int i=0; i<num; i++)
            cin>>r[i];
        cin>>k;
        right_shift(r,num,k-1);
    }
    
}
