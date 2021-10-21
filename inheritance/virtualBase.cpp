#include<iostream>
using namespace std;
 
// student --> test   (done)
// student --> sport  (done)
// test -> result 
// sport->result

class student {
protected :
 int rollno ;
public:
void setD(int a){
rollno=a;
}
void print (){
    cout<<"Roll no :"<<rollno<<endl;
}

};
class test: virtual public student { // decalring virtual public class
protected :
//rollno protected 
float math;
float phy;
public: 
void setM(float m1 ,float m2){
    math=m1;
    phy=m2;
}
void printM(){
    cout<<"Math marks : "<<math<<endl;
    cout<<"Physics marks : "<<phy<<endl;
}

};
class sport : public virtual student {
    protected: 
    //rollno protected 
    float score ;
    public:
    void setS(float s){
        score = s ;
    }
    void display(){
        cout <<"PT marks : "<<score<<endl;
    }
};
class result : public test ,public sport{
    private :
    float total ;
    public: 
    void displayT(){
        total = math + phy + score ;
        print();
        printM();
        display();
        cout<<"Your total score is : "<<total<<endl;

    }

};
int main()
{
    result almir;
    almir.setD(10);
    almir.setM(78,90);
    almir.setS(60);
    almir.displayT();
    return 0;
}

//to resolve ambiguity 
//  result will get only one copy of rollno 