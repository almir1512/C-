#include<iostream>
using namespace std;
void check (int yr){
    if (yr % 2 == 0){
        cout << "even"<<endl;

    }
    else{
        cout << "odd"<<endl;
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