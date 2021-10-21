#include<iostream>
using namespace std;
class NUM{
static int n;
    public:
        void getNum(int value){
            n=value;

        }
        int dispNum(){
         return n;
        }
        void operator ++(){
            ++n;
        }
        void operator --(){
            --n;
        }


};
int NUM:: n;
int main()
{
    NUM num;
    num.getNum(15);
    ++num;
    cout<<"after increment : "<<num.dispNum()<<endl;
    --num;
    cout<<"after decrement : "<<num.dispNum()<<endl;
    return 0;
}