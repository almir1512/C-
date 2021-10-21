#include<iostream>
#include<string>
using namespace std;

class student         // class 
{
    private:          //access modifier
    int passw;
    public:           //access modifier
    string name;
    int rollno;
    int DOB;
        student(string n,int r,int d,int sp)   //function
        {
            this->name=n;
            this->rollno=r;
            this->DOB=d;
            this->passw=sp;
        }
        void PrintDetails()       // method 
        {
            cout<<"Student name : "<<this->name<<endl;
            cout<<"Roll no : "<<this->rollno<<endl;
            cout<<"Year of Birth : "<<this->DOB<<endl;

        }
        void printpassword()
        {
            cout<<"Password : "<<this->passw<<endl;
        }

    


};


int main()
{
    student almir("ALMIR NOORI",1,2004,7866); //function call
    // almir.name="ALMIR NOORI";
    // almir.rollno=1;
    // almir.DOB=2004;
    
    almir.PrintDetails();
    almir.printpassword();
  
    return 0;
}