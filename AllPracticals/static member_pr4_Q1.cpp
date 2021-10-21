// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class demo{
    static int x,y;
    public: 
       static void display(void){
           cout<<"the value of x is "<<x<<endl;
           cout<<"the value of y is "<<y<<endl;
       }
};
int demo :: x=10;
int demo :: y=20;

int main() {
    demo a;
    demo :: display();

    return 0;
}