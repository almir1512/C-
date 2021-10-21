#include<iostream>
using namespace std;
class Distance{
int km,mtr;
static int count;
    public:
    void readDistance(){
        count++;
        cout<<"---Distance "<<count<<"---"<<endl;
        cout<<"Km : ";
        cin>>km;
        cout<<"Metres : ";
        cin>>mtr;    
    }
    void displayDistance(){
        cout<<km<<" km"<<" and "<<mtr<<" metres"<<endl;
    }
    friend Distance operator +(Distance &d1,Distance &d2);
};
int Distance :: count=0;
Distance operator +(Distance &d1,Distance &d2){
    Distance d;
    int a;
    a=d1.mtr+d2.mtr;
    d.mtr=a%1000;
    d.km=(a/1000)+d1.km+d2.km;
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