#include<iostream>
using namespace std;

class Distance{
    int feet,inches;
    static int count;
    public:
    // Distance(){ //constructor 
    //     feet=inches=0;
    // }
    void readDistance(){
        count++;
        cout<<"---Distance "<<count<<"---"<<endl;
        cout<<"Feet : ";
        cin>>feet;
        cout<<"Inches : ";
        cin>>inches;      
    }
    void displayDistance(){
        cout<<feet<<" feet"<<" and "<<inches<<" inches"<<endl;
    }
    Distance operator +(Distance dis1);

};
int Distance :: count=0;
Distance Distance ::  operator +(Distance dis1)
{
    Distance d;
    int a;
    a=inches+dis1.inches;
    d.inches=a%12;
    d.feet=(a/12)+dis1.feet+feet;
    return d;
}


int main()
{
   Distance t1,t2,t3;
    t1.readDistance();
    t2.readDistance();
    t3=t1+t2;
    t1.displayDistance();
    t2.displayDistance();
    t3.displayDistance();

    return 0;
}