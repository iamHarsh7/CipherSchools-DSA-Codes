#include <iostream>
using namespace std;


// void printstuff()
// {
//     cout<<"Print my first function";
// }

// int main()
// {
//  printstuff();
//  return 0;
// }

int sum(int a , int b)

{
    int c;
    c = a+b; 
    return c;
}

int main()
{
    int add_sum;
    int a,b;
    a=3 ; b=5;
    add_sum = sum(a,b);
    cout<<add_sum;

    return 0;
}