/*
Name: Hariket Sukeshkumar Sheth
Topic: Friend Functions
*/

#include <iostream>
using namespace std;
class Square;
class Rectangle{
	int length, breadth;
	public: 
		bool getDetails(){
			cin>>length>>breadth;
			return (length>0 && breadth>0);
		}
		friend void putDetails(Rectangle r, Square s);
};
class Square{
	protected:
		int side;
	public:
		bool getDetails(){
			cin>>side;
			return (side>0);
		}
		friend void putDetails(Rectangle r, Square s);
};	
void putDetails(Rectangle r, Square s){
	cout<<r.length * r.breadth<<endl;
	cout<<s.side * s.side<<endl;
}	
int main(){
	Rectangle r1;
	Square s1;
	if(r1.getDetails()){
		if(s1.getDetails()){
			putDetails(r1,s1);
		}
		else
			cout<<"Invalid Input"<<endl;
	}
	else
		cout<<"Invalid Input"<<endl;
}
