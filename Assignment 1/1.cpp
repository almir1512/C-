// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class ratio {
    public:
  int f;int m;
  
  void display (){
    cout<<"The female to male ratio is "<<fmratio(f,m)<<": 10 "<<endl;   
  }
  ratio(){
    cout<<"Enter the no of females : ";
    cin>>f;
    cout<<"Enter the no of males : ";
    cin>>m;
    
  }
  int fmratio(int f ,int m){
  
    float res=(float)f/m;
   
    int res1 = res*10;
   
    return res1;
  }
};


int main() {
   ratio r1;
   r1.display();
    return 0;
}