#include<iostream>
using namespace std;
class base{
int data1; //cannot be inherited 
public: 
    int data2;
    void setD(){
        data1=100;
        data2=200;
    }
    int getD1(){
        return data1;
    }
    int getD2(){
        return data2;
    }
};
class derived : public base { // derived class publicly
    int data3;
    public :
    void process(){
        data3=data2*getD1();
    }
    void display(){
        cout<<"the value of data 1 is :"<<getD1()<<endl;
        cout<<"the value of data 2 is :"<<data2<<endl;
        cout<<"the value of data 3 is :"<<data3<<endl;

    }
};
int main()
{
    derived d1;
    d1.setD();
    d1.process();
    d1.display();

    return 0;
}