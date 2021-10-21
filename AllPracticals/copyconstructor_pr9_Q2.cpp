#include<iostream>
using namespace std;

class weight{
    int gram;
    public:
        weight(){}
        weight(int a){

            gram = a;
        }
        weight(weight &obj){  //copy constructor 
            
            gram=obj.gram;
        }
        void show(){
            cout<<gram<<endl;
        }
        int compare(weight a,weight b);
};
int weight :: compare(weight a,weight b){
    if(a.gram > b.gram){
        return 1;

    }
    else{
        return 0;
    }
}
int main()
{
    weight ob1(350);
    ob1.show();

    weight ob2(650);
    ob2.show();

    weight ob3;
    int res=ob3.compare(ob1,ob2);
    if(res==1){
        weight ob4=(ob1);
        ob4.show();
    }
    else{
        weight ob4=(ob2);
        ob4.show();
    }

    
    return 0;
}