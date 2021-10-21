#include<iostream>
using namespace std;

class height{
    int feet;
    int inch;
    static int count;
    public:
        void setD(){
            count++;
            cout<<"--Enter the height--"<<endl;
            cout<<"Feet:";
            cin>>feet;
            cout<<"Inches:";
            cin>>inch;
        }
        void add(height a1,height b1,height c1)
        {
            height sum;
            sum.inch=a1.inch+b1.inch +c1.inch;
            sum.feet=sum.inch/12;
            sum.inch=sum.inch%12;
            sum.feet=sum.feet+a1.feet+b1.feet +c1.feet;
                    
            cout<<"Sum: "<<sum.feet<<"feet "<<sum.inch<<"inches"<<endl;
        }      
        void getD(void){
            cout<<"Height "<<count<<" : "<<feet<<"feet "<<inch<<"inches"<<endl;
            
        }
};
int height :: count;

int main()
{
    height h1,h2,h3,h4;
    h1.setD();h2.setD();h3.setD();
    h3.add(h1,h2,h3);
    return 0;
}