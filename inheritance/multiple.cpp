#include<iostream>
using namespace std;
// two base class --> one derived class
// class classname : VM base1,VM base2{}
class base1{
    protected :
    int baseint1;
    public:
    void setd1(int a){
        baseint1=a ;
    }
};
class base3{
    protected :
    int baseint3;
    public:
    void setd3(int a){
        baseint3=a ;
    }
};
class base2{
    protected :
    int baseint2;
    public:
    void setd2(int a){
        baseint2=a ;
    }
};



class derived : public base1,public base2,public base3{
   // baseint1 ,  baseint2 will be protected 
   // all the member functions are public 
    
    public :
    void display(){
        cout<<"value of base 1 variable : "<<baseint1<<endl;
        cout<<"value of base 2 variable : "<<baseint2<<endl;
        cout<<"value of base 3  variable : "<<baseint3 <<endl;
        cout<<"value of sum :"<<baseint1+baseint2+baseint3<<endl;
}
};


int main()
{
    derived f1;
    f1.setd1(60);
    f1.setd2(30);
    f1.setd3(10);
    f1.display();
    
    return 0;
}