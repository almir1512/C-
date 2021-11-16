#include<iostream>
using namespace std;
void check (int yr){
    if (yr < 0){
        cout << "negative"<<endl;

    }
    else {
        cout << "positive"<<endl;
    }
}
int main()
{
    int yr;
    cout << "enter the no :";
    cin >> yr;
    check (yr);
    return 0;
}