#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    cout<<"Input 4 integers a,b,c and d"<<endl;

    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;


    // cout<<(a>b && c>d);
    cout<<(a>b || c>d);
    // C++ interprets True as 1
    // C++ interprets Faalse as 0 
    return 0;
}