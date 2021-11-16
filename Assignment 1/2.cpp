#include<iostream>
using namespace std;
class divisibility{
    int no ;
    
    public :
    divisibility(){
        cout<<"Enter the number : ";
        cin>>no;
    }
    void four (){
       
        if ((no%4)==0){
            cout<<"divisible by 4."<<endl;
        }
        else {
            cout<<"not divisible by 4."<<endl;
        }
    }
    void two(){
       
        if ((no%2)==0){
            cout<<"divisible by 2."<<endl;
        }
        else {
            cout<<"not divisible by 2."<<endl;
        }
    }
};
int main()
{
    divisibility d1;
    d1.two();
    d1.four();
   
    return 0;
}