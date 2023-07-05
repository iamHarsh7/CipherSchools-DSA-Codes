#include <iostream>

using namespace std;

int main()
{
    int a[10];

    int i;
    cout<<"Enter the 10 integers  as input"<<endl;                       
    for(i=0;i<10;i++)
    {
        
        cin>>a[i];
    }

    cout<<"the 10 integers are :"<<endl;

    for(i=9;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
}

