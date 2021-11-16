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
    void five(){
       
        if ((no%5)==0){
            cout<<"divisible by 5."<<endl;
        }
        else {
            cout<<"not divisible by 5."<<endl;
        }
    }
};
int main()
{
    divisibility d1;
    d1.four();
    d1.five();
   
    return 0;
}