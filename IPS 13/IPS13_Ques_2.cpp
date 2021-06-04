/*
A sample of nitrogen gas occupies a volume of 'v1' cubic units at 'p1' mmHg (unit of pressure is mmHg) and 't1' °C. The volume increases by 'v2' cubic units and the temperature decreases to 't2' °C. Write a C++ program to compute the final pressure exerted on the gas.  Use the equation p1v1/t1 = p2v2/t2,  for your   computation. If any of the value in the denominator of the equation is zero then throw an exception that prints 'zero not allowed' and do not perform the computation.
Note: Syntax to print 'x' decimal places of variable 'a'

include <iomanip>
use
cout<<fixed<<setprecision(x)<<a;

Input format
Volume v1 in cubic units
Pressure p1 in mmHg
Initial temperature t1 in ° C
Final volume v2 in L
Final temperature t2 in ° C

Output Format
Represent the output in two decimal points
Final pressure p2 in mmHg
*/

/*
Name: Hariket Sukeshkumar Sheth
Topic: Exception Handling in CPP
*/
#include <iostream>
#include <iomanip>
using namespace std;
void final_pressure (int p1, int v1, int t1, int v2, int t2){
    float p2;
    try {
        if(v2==0 || t1==0)
            throw "zero not allowed";
        p2 = (float)(p1*v1*t2)/(v2*t1);
        cout<<fixed<<setprecision(2)<<p2;
    }
    catch(const char* Msg){
        cout<<Msg<<endl;
    }
}
int main(){
    int p1, v1, t1, v2, t2;
    cin>>v1>>p1>>t1>>v2>>t2;
    final_pressure(p1,v1,t1,v2,t2);
}
