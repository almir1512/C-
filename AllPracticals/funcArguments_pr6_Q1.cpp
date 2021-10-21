#include<iostream>
using namespace std;

class weight{
    int kg;
    int gram;
    static int count;
    public:
        void setD(){
            count++;
            cout<<"--Enter the weight--"<<endl;
            cout<<"Kg:";
            cin>>kg;
            cout<<"Grams:";
            cin>>gram;
        }
        void add(weight a1,weight b1)
        {
            weight sum;
            sum.gram=a1.gram+b1.gram;
            sum.kg=sum.gram/1000;
            sum.gram=sum.gram%1000;
            sum.kg=sum.kg+a1.kg+b1.kg;
            
            cout<<"Sum: "<<sum.kg<<"kg "<<sum.gram<<"grams"<<endl;
        }        void getD(void){
            cout<<"Weight "<<count<<" : "<<kg<<"kg "<<gram<<"grams"<<endl;
            
        }
};
int weight :: count;

int main()
{
    weight w1,w2,w3;
    w1.setD();w2.setD();
    w3.add(w1,w2);
    return 0;
}