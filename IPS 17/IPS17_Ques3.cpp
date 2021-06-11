/*
Write a C++ program to overload binary operator to perform addition of two matrices (2x2 matrix) by defining the required class 

Input :

First line read M(No. of Rows) and N (No. of Columns)

Second line onwards read the M X N elements of Two Matrices one by one

Output : 

Matrix Addition 

Note : if M or N is -ve, then print "Invalid Dimension"*/

/*
Name: Hariket Sukeshkumar Sheth
Topic: Operator Overloading
*/

#include <iostream>
using namespace std;

class Matrix{
    int matrix [2][2];
    public:
    int temp[2][2];
        void get_data();
        void operator + (Matrix mat);
        void put_data();
};

void Matrix :: get_data(){
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>matrix[i][j];
        }
    }
}
void Matrix :: operator + (Matrix mat){
    for(int i=0;i<2;i++){
        for(int j=0; j<2; j++){
            temp[i][j] = matrix[i][j] + mat.matrix[i][j];
        }
    }
}
void Matrix :: put_data(){
    for(int i=0; i<2; i++){
        for (int j=0; j<2; j++){
            cout<<temp[i][j]<<endl;
        }
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    if(m<0 || n<0)
        cout<<"Invalid Dimension";
    else{
        Matrix A, B;
        A.get_data();
        B.get_data();
        A+B;
        A.put_data();
    }
}
