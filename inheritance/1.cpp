#include<iostream>
using namespace std;
class simple{
    
    public:
    int a ,b;
    void setD(){
        cout<<"Enter a:";
        cin>>a;
        cout<<"Enter b:";
        cin>>b;
    }   
    void op1(){
    
        cout<<"Sum is : "<<a+b<<endl;
        cout<<"Difference is :"<<a-b<<endl;
        cout<<"Product is : "<<a*b<<endl;
        cout<<"Qoutient is : "<<a/b<<endl;
    }
   
};
class scientific{
    
    public:
    
    
    void op2(int a,int b){
       
        cout<<"Sum is : "<<a+b<<endl;
        cout<<"Difference is :"<<a-b<<endl;
        cout<<"Product is : "<<a*b<<endl;
        cout<<"Qoutient is : "<<a/b<<endl;
    }
};
class hybrid : public simple, public scientific{
    public:
    void display (){
        op1();
        cout<<"\n";
        op2(a,b);

    }
};



int main()
{
    hybrid h1;
    h1.setD();
    h1.display();
    return 0;
}