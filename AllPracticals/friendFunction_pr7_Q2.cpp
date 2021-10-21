#include<iostream>
#include<cstring>
using namespace std;
class science {
 public:
 string name;
 float x;
   
    void setd(){
        cout<<"Enter the name of the science book : ";
        cin>>name;
        cout<<"Enter the price of book : ";
        cin>>x;
    }
 
    friend void discout(science book1);
};
class history {
    public:
 string name1;
 float y;
    
    void setd(){
       cout<<"Enter the name of the history book : ";
        cin>>name1;
        cout<<"Enter the price of book : ";
        cin>>y;
    }
    friend void discout(history book2);
};

void discount (science book1, history book2){
    float dis1,dis2,disP1,disP2;
    dis1=book1.x * 0.2;
    dis2=book2.y * 0.2;

    disP1=book1.x-dis1;
    disP2=book2.y-dis2;
    
   
   cout<<"\nDiscounted price of the science book :"<<disP1;
   cout<<"\nDiscounted price of the history book :"<<disP2<<endl;
}



    
int main()
{
    science s1;
    history h1;
    s1.setd();
    h1.setd();
    discount(s1,h1);
    return 0;
}