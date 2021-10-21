#include<iostream>
using namespace std;
class employee{ // base class 
    
    float salary;
    public:
    int id;
    employee(int inpid){
        id=inpid;
        salary=34.0;

    }
    employee (){}
};

class programmer : public employee{
 public:
 int languagecode=9;
 
    programmer (int inpid){
    id=inpid;
    }
    void getD(){
        cout<<id<<endl;;
    }

};
int main()
{
    employee harry(1),rohan(2) ;
    programmer p1(10);
    cout<<p1.languagecode<<endl;
    cout<<p1.id<<endl;
    p1.getD();
   
    return 0;
}

/* 
1.Default visibility mode is private
2.In private visibility mode, public members of the base class become private 
member of the derived class
3.In public visibility mode, public members of the base class become public 
members of the derived class

4.Private data members of the base class are not inherited 


*/


// class class_name : visibility-mode baseclass-name