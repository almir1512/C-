// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class shape
{
    public:
    double a =5,b=6;
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
int main() {
    shape *a;
    rectangle t1;
    a=&t1;
    a->display();
    return 0;
}