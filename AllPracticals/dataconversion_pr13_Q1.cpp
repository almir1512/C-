#include<iostream>
using namespace std;
class weight{
    static int count ;
    int kg,gram;
    public:
    weight(){count++;
        cout <<"----Weight "<<count<<"----"<<endl;
        cout<<"Kg : ";
        cin>>kg;
        cout<<"Grams : ";
        cin>>gram;
    }
    void display(){
        cout<<kg<< " kg "<<gram<<" grams "<<endl;
    }
    operator int(){
        return (kg*1000+gram);

    }

};

int weight :: count =0;
int main()
{
    weight w1;
    w1.display();
    int gram = (int)w1;
    cout<<gram;


    return 0;
}