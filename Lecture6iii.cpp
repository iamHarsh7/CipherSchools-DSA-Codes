//While Loop
#include <iostream>
using namespace std;

int main()
{
    // int i;
    
    // i=1;                // Initialization
    
    // while(i<101)        // Condition
    // {
    //     cout<<i<<" ";
    //     i++;            //Updation
    // }

    //Guess the number 65 

    int i;
    i = 100;
    int input;

    for(i=1;i<101;i++)
    {
        cin>>input;
        if(input == 65)
        {
            cout<<"Congrats you have guessed it right";
            break;
        }

    }

}