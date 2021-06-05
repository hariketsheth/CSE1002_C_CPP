/*
Write a program in C++ to sort the array elements in ascending order also display the sorted elements without duplication. Use dynamic memory allocation(new() and delete())
Input Format: 
           Read array size
           Read array elements 
Output Format:
          Display the array elements in ascending order without duplicates 

Note : if the Size of the Array is -ve, print "Invalid Input"

Input:
10
3
1
4
3
6
3
7
9
11
2
Output:
1
2
3
4
6
7
9
11
*/

/*
Name: Hariket Sukeshkumar Sheth
Topic: Dynamic Memory Allocation in CPP
*/
#include <iostream>
using namespace std;
class Ascend{
    int n;
    public:
        void getDetails(){
            cin>>n;
        }
        int sort(Ascend *first, Ascend *sec, int num){
            static int count=0;
            for(int i=0;i<num;i++){
                bool flag = true;
                int temp = (first+i)->n;
                for(int j=0;j<count;j++){
                    if((sec+j)->n == temp){
                        flag = false;
                    }
                }
                if(flag == true){
                    (sec+count)->n = temp;
                    count++;
                }
            }
        
            for (int i=0;i<count-1;i++){
                for(int j=0;j<count-i-1;j++){
                    if((sec+j)->n > (sec+j+1)->n){
                        Ascend *temp;
                        *temp = *(sec+j);
                        *(sec+j) = *(sec+j+1);
                        *(sec+j+1) = *temp;
                    }
                }
            }
            return count;
        }
        void putDetails(){
            cout<<n<<endl;
        }
        
};
int main(){
    int num, count=0;
    cin>>num;
    if(num<0){
        cout<<"Invalid Input";
    }
    else{
        Ascend *old = new Ascend[num];
        Ascend *new1 = new Ascend[num];
        for(int i=0;i<num;i++){
            (old+i)->getDetails();
        }
        Ascend a;
        count =a.sort(old, new1, num);
        for (int i=0;i<count;i++){
            (new1+i)->putDetails();
        }
        delete []old;
        delete []new1;
    }
}
