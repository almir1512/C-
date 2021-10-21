#include<iostream>
using namespace std;
class room{
    int l,b,h;
    public:
        room(){
            l=40;
            b=15;
            h=30;
            cout<<"object is created"<<endl;
        } 
        int calculatearea(){
            int area= 2*(l*b+b*h+l*h);
            return area;

        }
        void print(){
            cout<<"area of the room is : "<<calculatearea()<<endl;
        }
};

int main()
{
    room room1;
    room1.print();
    return 0;
}