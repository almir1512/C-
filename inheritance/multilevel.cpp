#include<iostream>
using namespace std;
class student {
    protected :
    int rollno;
    public:
    void setD(int x){
        rollno=x;
    }
    void getD(void){
        cout<<"roll no :"<<rollno<<endl;
    }
};
class exam : public student {
    // roll no is protected 
    protected :
    float maths;
    float phy;
    public:
    void setM(float m1,float m2){
        maths = m1;
        phy = m2;
    }
    void getM(){
        cout<<"Maths marks:"<<maths<<endl;
        cout<<"Physics marks:"<<phy<<endl;
    }
};
class result : public exam{
    // roll no,maths , phy are protected here
    float percent ;
    public: 
    void display(){
        getD();
        getM();
        cout<<"Percentage: "<<(maths+phy)/2<<"%"<<endl;
    }
};

int main()
{
    result almir;
    almir.setD(1);
    almir.setM(99.90,90.50);
    almir.display();

    return 0;
}

/* 

if we are inheriting b from a and c fromm b 
    a-->b-->c
1. a is base of b and b is base for c 
2. a-->b-->c is called inheritance path 

*/