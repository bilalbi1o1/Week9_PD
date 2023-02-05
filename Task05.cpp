
#include <iostream>
using namespace std;

int main()
{
    int count=0;
    int number;   

    cout<<"Enter how many strings you want to enter: ";
    cin>>number;

    string values[number];

    for(int i = 0 ; i<number ; i++ )
    {
        cout<<"Enter a string : ";
        cin>>values[i];
    }

    for(int i = 0 ; i<number ; i++ )
    {
        if(values[0] == values[i] )
        {
            count++ ;
        }
    }
    if(count == number)
    cout<<"True";
    else
    cout<<"False";
}