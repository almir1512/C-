// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define PI 3.14
class shape
{
    public:
    double a ,b;
    void getD(int a1,int b1=0){
        a=a1;
        b=b1;
    }
    virtual void display(){
        cout<<"the area is "<<a*b<<endl;
    }
};
class triangle: public shape
{
    int c =10;
    public: 
    void display(){
        cout<<"the area of triangle is "<<a*b*c<<endl;
    }
    
};

class rectangle: public shape
{
    
    public: 
    void display(){
        cout<<"the area of rectangle is "<<a*b<<endl;
    }
    
};
class circle: public shape
{
    public: 
    void display(){
        cout<<"the area of circle is "<<PI*a*a<<endl;
    }
    
};
int main() {
    shape *a;
    circle t1;
    a=&t1;
    a->getD(50,60);
    a->display();
    return 0;
}