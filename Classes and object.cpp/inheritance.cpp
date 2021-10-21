#include<iostream>
#include<string>
 
using namespace std;

class employee{
    public:
    int ID;
    string name;
        employee(int I,string n)   //function
        {
            this->ID=I;
            this->name=n;
        }

        void printDetails()         //method
        {
            cout<<"ID :"<<this->ID<<endl;
            cout<<"Nmae :"<<this->name<<endl;        }
};
class student:public employee{            //inheritance
 int DOB;
};
int main()
{
    employee almir(101,"ALMIR NOORI");
    // almir.ID=100;
    // almir.name="ALMIR NOORI";

    almir.printDetails();
    return 0;

}