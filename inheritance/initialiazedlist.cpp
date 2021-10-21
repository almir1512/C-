#include<iostream>
using namespace std;
/* 
syntax: 
construtor (argument-list): initialization-section
{
    assignmnent + other code ;

}
*/
class Test{
   int a ;int b;
    public:
    //Test (int i,int j): a(i),b(j)
    //Test (int i,int j): a(i),b(i+j)
    //Test (int i,int j): a(i),b(2*j)
    //Test (int i,int j): a(i),b(a+j)
    //Test (int i,int j): b(i),a(j) --> error cause a is initialized first than b

    Test (int i,int j): a(i),b(j){  // initialize here 
    cout<<"Constructor executed "<<endl;
    cout <<"value of a is "<<a<<endl;
    cout <<"value of b is "<<b<<endl;
    }

};


int main()

{
    Test t(4,6);
    return 0;
}