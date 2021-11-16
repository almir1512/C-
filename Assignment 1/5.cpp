#include<iostream>
using namespace std;
class check{
char ch;
int res ;
public :
check (){
    cout << "Enter an alphabet : ";
    cin>>ch;

}
void lowUp ()
{
    res = ch;
    if (res >= 97 && res<=122){
        cout<<"LowerCase alphabet";
    }
    else if (res >= 65 && res<=90){
        cout<<"UpperCase alphabet";
    }
    else {
        cout<<"Invalid character ";
    }
}
};
int main()
{
    check c1;
    c1.lowUp();
    return 0;
}