#include<iostream>
using namespace std;
class matrix{
int arr[2][2];
static int count ;
    public:
    void readValues(){
    cout<<"----Matrix "<<count<<"----"<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"element ["<<i<<"]"<<"["<<j<<"]"<<" : ";
            cin>>arr[i][j];
        }
        
    }
    }
    void displaymat(){
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"element ["<<i<<"]"<<"["<<j<<"]"<<" : "<<arr[i][j]<<endl;
           
        }
        
    }
    }
    friend matrix operator +(matrix &m1,matrix &m2);

};
int matrix :: count = 0;
matrix operator +(matrix &m1,matrix &m2){
    matrix m;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            m.arr[i][j]=m1.arr[i][j]+m2.arr[i][j];
        }
        
    }
    return m;
    

}
int main()
{
    matrix t1,t2,t3;
    t1.readValues();
    t2.readValues();
    t3=t1+t2;
    t1.displaymat();
    t2.displaymat();
    t3.displaymat();
    return 0;
}