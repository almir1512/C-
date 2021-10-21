#include<iostream>
using namespace std;
class base{
    protected:
    int a;  // -> if i want to inherit 
    private:
    int b;

};
class derived : protected base {

};
int main()
{
    base b;
    derived d;
    // cout << d.a; -> will not work as a is protected in base and derived class
    

    return 0;
}
// protected variable can be inherited 