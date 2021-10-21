#include<iostream>
using namespace std;


class employee{
    string name;
    float salary;
    static int count;

    public:
        void setD(void){
            count++;
            cout<<"Name of manager:"<<endl;
            cin>>name;

            cout<<"Enter salary : "<<endl;
            cin>>salary;

        }
        float HIKE(void){

            float hike = 0.2*salary;
            return (salary+hike);

            

        }
        void getD(void){
            cout<<"Manager "<<count<<": "<<name<<endl;
            cout<<"Salary : "<<salary<<endl;
            cout<<"Hiked Salary : "<<HIKE()<<endl;
        }
};
int employee :: count;

int main()
{
    employee b1[4];
    for(int i=0;i<4;i++){
    b1[i].setD();
    b1[i].getD();
    }
    return 0;
}