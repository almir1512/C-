#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "enter two nos :";
    cin >> a >> b;
    int res=a>b?a:b;
    
    cout<<res<<" is the largest number";
    return 0;
}