#include<iostream>
using namespace std;

class feet{
    int ft,inch;
    public: 
    feet(int f,int i){
        ft=f;
        inch=i;
    }
    void display(){
        cout<<ft<< " Feet "<<inch<<" inches"<<endl;
    }
    int convert(){
        int res=(ft*12)+inch;
        return res;
    }
};

class inches{
    int inches;
    public:
    void operator =(feet w1){
        inches=w1.convert();

    }
    void display(){
        cout<<"total inches :"<<inches<<endl;
    }
};
int main()
{
    feet f1(10,9);
    f1.display();
    inches i1;
    i1=f1;
    i1.display();

    return 0;
}