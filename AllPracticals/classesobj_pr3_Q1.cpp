#include<iostream>
using namespace std;
class room{
    float l,b,h;
    public: 
        void calArea(float l1,float b1,float h1){
            l=l1;b=b1;h=h1;
           float S = 2*(l*b + b*h + l*h);
           cout<<"Area :"<<S<<endl;
        }
        void calVolume(float l1,float b1,float h1){
            cout<<"Volume : "<<l*b*h<<endl;
        }
};
int main()
{
    room room1;
    room1.calArea(42.3,30.8,19.2);
    room1.calVolume(42.3,30.8,19.2);
    return 0;
}