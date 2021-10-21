#include<iostream>
using namespace std;
class demo{
    int a,b;
    public:
        demo(){
            cout <<"constructor called !"<<endl;
            a=10;
            b=30;
        }
        demo(demo &obj){
            cout<<"object 2 created (copy constructor)"<<endl;
            a=obj.a;
            b=obj.b;

        }
        void show(){
            cout <<a<<" and "<<b<<endl;

        }
};


int main()
{
    demo a1;
    a1.show();
    demo a2=(a1); //calling copy constructor
    a2.show();

    return 0;
}