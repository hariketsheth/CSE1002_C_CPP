/*
The distance D between two points with coordinates (x1,y1) and (x2,y2) on a plane is given by

D = [(x2- x1)2 + (y2 – y1)2]1/2

The distance between two points (x1,y1,z1) and (x2,y2,z2) in a three dimensional space is given by

D = [(x2-x1)2 +(y2-y1)2 + (z2-z1)2]1/2

Develop a program in C++ using function overloading by writing the same function  ComputeDistance() with different signatures. Round off distance to two decimal points

Note: Syntax to print 'x' decimal places of variable 'a'

include <iomanip>

use

cout<<fixed<<setprecision(x)<<a;

Input format

x coordinate of point 1

y coordinate of point 1

z coordinate of point 1

x coordinate of point 2

y coordinate of point 2

z coordinate of point 2

Output format

Distance in two dimensional plane

Distance in three dimensional space*/
  
/*
Name: Hariket Sukeshkumar Sheth
Topic: Function Overloading
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
class Dist{
    
    public:
        float distance(int x1, int x2, int y1, int y2){
            return sqrt(pow((x2-x1),2) + pow((y2-y1),2));
        }
        float distance(int x1, int x2, int y1, int y2, int z1, int z2){
            return sqrt(pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2));
        }
};
int main(){
    int x1,x2;
    int y1,y2;
    int z1,z2;
    cin>>x1>>y1>>z1>>x2>>y2>>z2;
    Dist D1, D2;
    cout<<fixed<<setprecision(2)<<D1.distance(x1,x2,y1,y2)<<endl;
    cout<<fixed<<setprecision(2)<<D2.distance(x1,x2,y1,y2,z1,z2)<<endl;
}
