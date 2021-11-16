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
        cout<<"Alphabet";
    }
    else if (res >= 65 && res<=90){
        cout<<"Alphabet";
    }
    else {
        cout<<"Invalid Alphabet";
    }
}
};
int main()
{
    check c1;
    c1.lowUp();
    return 0;
}