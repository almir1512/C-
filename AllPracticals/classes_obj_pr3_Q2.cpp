// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class student{
  
    
    int rollno, mark1,mark2;

    public: 
        void setdata(){
           
            cout<<"------Enter details------"<<endl;
            cout<<"Roll Number: ";
            cin>>rollno;
            cout<<"Mark1: ";
            cin>>mark1;
            cout<<"Mark2: ";
            cin>>mark2;
            cout<<endl<<endl;
            

        }
        float grade(){
          
           int total = mark1 + mark2;
           float ab=(float) total / 200 ;
           
           float res=(float) total / 200 * 100;

           return res;
        }
        void getdata(void){
            
            cout<<"Roll Number: "<<rollno<<endl;
            cout<<"Mark1: "<<mark1<<endl;
            cout<<"Mark2: "<<mark2<<endl;
            cout<<"Percentage : "<<grade()<<endl<<endl;
            
        }
};


int main() {
    
    student s1,s2;
    s1.setdata();
    s1.getdata();

    s2.setdata();
    s2.getdata();
    return 0;
}