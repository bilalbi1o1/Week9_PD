
#include <iostream>
using namespace std;

int main()
{
    int count;
    bool flag=false;   

    cout<<"Enter how many numbers you want to enter: ";
    cin>>count;

    int numbers[count];

    for(int i = 0 ; i<count ; i++ )
    {
        cout<<"Enter a number : ";
        cin>>numbers[i];
    }

    for(int i = 0 ; i<count ; i++ )
    {
        if(numbers[i] == 7)
        {
            flag=true ;
            break;
        }
    }

    if(flag)
    {
    cout<<"Boom";
    }
    else
    {
    cout<<"7 is not found in array";
    }
}