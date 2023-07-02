#include <iostream>
using namespace std;

int main()
{
    // float a,b;
    // cout<<"Give input 2 floating point numbers :"<<endl;
    // cin>>a>>b;

    // if(a>0.01 && b>a) 
    // {
    //     cout<<"The Contional statement is correct"<<endl;
        
    // }
    // else
    // {
    //     cout<<"The condition is false"<<endl;
    // }
    // return 0;

    // int a,b,c,d;

    // cout<<"Input 4 integers a,b,c,d"<<endl;
    // cin>>a>>b>>c>>d;

    // if(a>b && c>d)
    // {
    //     cout<<"haha"<<endl;
    // }
    // else if(a>b && c<d)
    // {
    //     cout<<"hehe"<<endl;
    // }
    // else if(a<b && c>d)
    // {
    //     cout<<"huhu"<<endl;
    // }

    cout<<"enter a integer:"<<endl;
    int a;
    cin>>a;

    switch(a)
    {

    case 1:
        cout<<"Value is 1";
        break;
    case 2:
        cout<<"Value is 2";
        break;
    default:
        cout<<"Default is always printed";
        break;
    
    }
}