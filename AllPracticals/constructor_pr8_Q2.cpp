#include<iostream>
using namespace std;
int count = 0;
class student{
    int mark1,mark2,total;
    public:
        void getD(){ 
            count++;
            cout <<"Enter the mark 1 (student " <<count<< "):"<<endl;
            cin>>mark1;

            cout <<"Enter the mark 2 (student " <<count<< "):"<<endl;
            cin>>mark2;
        }
        student(int m1,int m2){ // constructor
           
            mark1=m1;
            mark2=m2;
        }
        
        void sum(){
            total=mark1+mark2;
            cout<<"Total Marks: "<<total<<endl;

        }
        

};

int main()
{
    int x,y;
    student s1(x,y);
    s1.getD();
    s1.sum();

    student s2(x,y);
    s2.getD();
    s2.sum();
    return 0;
}