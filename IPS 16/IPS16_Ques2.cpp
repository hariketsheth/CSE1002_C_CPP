/*
Name: Hariket Sukeshkumat Sheth
Topic: Function Overloading
*/
#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
class Add_Overloading{
    public:
        int add (int x1, int x2){
            return (x1+x2);
        }
        float add (float x1, float x2){
            return (x1+x2);
        }
        void add(char s1[], char s2[]){
            sprintf(s1,"%s %s",s1,s2);
            cout<<s1<<endl;
        }
};
int main(){
    int x1, x2;
    float f1, f2;
    char s1[100], s2[50];
    cin>>x1>>x2>>f1>>f2;
    scanf(" %[^\n]s",s1);
    scanf(" %[^\n]s",s2);
    Add_Overloading A1;
    cout<<A1.add(x1,x2)<<endl;
    cout<<fixed<<setprecision(1)<<A1.add(f1,f2)<<endl;
    A1.add(s1,s2);
}
