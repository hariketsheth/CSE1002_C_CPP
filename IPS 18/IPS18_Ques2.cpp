/*
KVP_Inheritance
First year MCA students of IIM-B were asked to present the details of ‘n’ CEOs (Chief Executive Officer) of IT companies and finally conclude the presentation with the details of highly paid CEO who is an INDIAN and currently located in NewZeland. As a programmer support the MCA students programmatically through C++. Write a friend function to display the details of highly paid CEO who is an INDIAN and currently located in NewZeland.

Let the CEO be represented as CEO{ssn, name, age, companyName, nationality, currentWorkingLocation, pay (in $)}

Input Format:

The first line should contain the value of ‘n’, number of CEO objects.

The next ‘n’ lines will contain the ‘n’ CEOs details

 

Output Format:

Details of the INDIAN CEO who is highly paid and currently located in US.

 

Boundary Conditions:

Numeric fields must be validated for their positive-ness otherwise print “Invalid input”

Age must be greater than 23
*/

/*
Name: Hariket Sukeshkumar Sheth
Topic: Inheritance
*/
#include <iostream>
using namespace std;

class CEO{
    int ssn, age, pay;
    string companyName, currentWorkingLocation, name, nationality;
    public: 
    int get();
    int calc(CEO *C, int n);
    void write (CEO *C, int i);
};

int CEO :: get(){
    cin >> ssn >> name >> age >> companyName;
    cin >> nationality >> currentWorkingLocation >> pay;
    if (age>23 && ssn >0 && pay >0)
        return 0;
    return -1;
    
}
int CEO :: calc (CEO *C, int n){
    int max = 0, ind = 0;
    for(int i=0; i<n; i++){
        if (C[i].pay > max && C[i].currentWorkingLocation == "US" && 
		C[i].nationality == "INDIAN"){
            ind = i;
            max = C[i].pay;
        }
    }
    return ind;
}
void CEO :: write (CEO *C, int i){
    cout << C[i].ssn << "\n" << C[i].name <<"\n" << C[i].age <<endl;
    cout << C[i].companyName << "\n" << C[i].nationality << "\n";
	cout << C[i].currentWorkingLocation << "\n" << C[i].pay <<endl;
}

class Max : public CEO {
    
};

int main(){
    int n, i;
    cin>>n;
    CEO *C = new CEO [n];
    for(i=0; i<n; i++){
        if(C[i].get()==-1){
            cout << "Invalid input" <<endl;
            break;
        }
    }
    if(i==n){
        Max M;
        int index = M.calc(C,n);
        M.write(C,index);
    }
}
