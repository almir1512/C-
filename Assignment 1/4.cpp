#include<iostream>
using namespace std;
void check (int yr){
    if (yr % 4 == 0){
        cout << "leap year"<<endl;

    }
    else {
        cout << "not a leap year"<<endl;
    }
}
int main()
{
    int yr;
    cout << "enter the year :";
    cin >> yr;
    check (yr);
    return 0;
}