#include<iostream>
using namespace std;
class base1{
    public:
    void greet(){
        cout<<"How are you ?"<<endl;
    }
};
class base2{
    public:
    void greet(){
        cout<<"Kaise ho?"<<endl;
    }
};
class derive : public base1,public base2{
    int a ;
    public:
    void greet(){
        base2 :: greet (); // to solve ambiguity in class
    }
};

class B{
    public:
    void say(){
        cout<<"hello world !"<<endl;

    }
};
class D: public B{
    int a;
    // it will over write method of derived class 
    public:
    void say(){
        cout<<"hello almir !"<<endl;

    }
};

int main()
{
    // base1 b1 ;
    // base2 b2 ;
  

    // derive d1;
    // d1.greet();
    // return 0;

    B b1;
    b1.say();

    D d1;
    d1.say();
}