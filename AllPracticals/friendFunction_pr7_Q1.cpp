#include<iostream>
using namespace std;
class room{
    float l,b,h;
    public:
      void setD(float a,float b1, float c){
          l=a;
          b=b1;
          h=c;
      }
      friend float calculatearea(room a1);
      friend float calculatevolume(room a1);
        
};

float calculatearea(room a1){
    float sum=2*(a1.l*a1.b+a1.l*a1.h+a1.h*a1.b);
    return sum;
}
float calculatevolume(room a1){
   float sum =a1.l*a1.b*a1.h;
    return sum;
}



int main()
{
    room r1;
    r1.setD(42.3,30.8,19.2);

    float sum = calculatearea(r1);
    cout<<"Area : "<<sum<<endl;

    float vol = calculatevolume(r1);
    cout<<"Volume : "<<vol<<endl;
    return 0;
}