#include<iostream>
using namespace std;
/*
case1:
class B: public A{
    // first A() then B()
}
case2:
class A: public B,public C{
    // first B() then C() and then A()
}
case3:
class A: public B,virtual public C{
    // first C() then B() and then A()
}
*/

class base1{
    int data1;
    public:
    base1(int i){
        data1=i;
        cout <<"base1 constructor called "<<endl;
    }
    void print (){
        cout<<"the value of data is: "<<data1<<endl;
    }
};
class base2{
    int data2;
    public:
    base2(int i){
        data2=i;
        cout <<"base2 constructor called "<<endl;
    }
    void print1 (){
        cout<<"the value of data is: "<<data2<<endl;
    }
};
class derived : public base1,public base2{  
    int DER1,DER2;
    public:
    derived (int a,int b,int c,int d): base1(a),base2(b){
    DER1=c;
    DER2=d;
    cout<<"derived class constructor called"<<endl;
    }
    void print2(){
    cout<<"the value of DERIVE1 is: "<<DER1<<endl;
    cout<<"the value of DERIVE2 is: "<<DER2<<endl;
    }
};



int main()
{
    derived almir (1,2,3,4);
    almir.print();
    almir.print1();
    almir.print2();

    return 0;
}