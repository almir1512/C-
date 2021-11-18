#include<iostream>
using namespace std;

class book{
    string name;
    float price;
    public:
        void setdata(void){
            cout<<"Enter the name of the book: "<<endl;
            cin>>name;
            cout<<"Enter the price :"<<endl;
            cin>>price;
            cout<<endl;
        }
        float discountedP(void){
           
           float discount =(float) 0.1*price;     
          
            return (price-discount);
        }

        void getdata()
        {
            cout<<"----------------------------"<<endl;
            cout<<"Book :"<<name<<endl;
            cout<<"Price :"<<price<<endl;
            cout<<"Discounted Price :"<<discountedP()<<endl;
            cout<<"----------------------------"<<endl;
        }
      
};
int main()
{
    book b1[5];
    for(int i=0;i<4;i++){
    b1[i].setdata();
    b1[i].getdata();
    }
    
    return 0;
}