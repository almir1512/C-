// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class student{
  
    static int count;
    int rollno=count, mark1,mark2;

    public: 
        void setdata(){
            count++;

            cout<<"Enter the following for student "<<count<<endl;
            cout<<"Roll Number: "<<endl;
            cin>>rollno;
            cout<<"Mark1: "<<endl;
            cin>>mark1;
            cout<<"Mark2: "<<endl;
            cin>>mark2;
            

        }
        float grade(){
           float res;
           
           res=(float)((mark1+mark2)/200)*100;

           return res;
        }
        void getdata(void){
            cout<<"---------Student "<<count<<"-----------"<<endl;
            cout<<"Roll Number: "<<rollno<<endl;
            cout<<"Mark1: "<<mark1<<endl;
            cout<<"Mark2: "<<mark2<<endl;
            cout<<"Percentage : "<<grade()<<endl;
        }
};

int student :: count ;
int main() {
    
    student s1,s2;
    s1.setdata();
    s1.getdata();

    s2.setdata();
    s2.getdata();
    return 0;
}