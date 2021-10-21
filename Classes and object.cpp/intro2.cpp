#include<iostream>
using namespace std;

class employee{
     
    private:
    int d;
    int e;

    public:
    int a;
    int b;
    int c;

    void setD(int a1,int b1);  // function  prototyping 
    void getD(){
        cout<<"the value of a is : "<<a<<endl;
        cout<<"the value of b is : "<<b<<endl;
        cout<<"the value of c is : "<<c<<endl;
        cout<<"the value of d is : "<<d<<endl;
        cout<<"the value of e is : "<<e<<endl;

    }

};
void employee :: setD(int a1,int b1){
    d=a1;
    e=b1;
}


int main(){

    employee almir;
    almir.a=1;
    almir.b=2;
    almir.c=3;
    
    almir.setD(4,5);
    almir.getD();
    

    return 0;

}