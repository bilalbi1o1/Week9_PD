#include <iostream>
using namespace std;

int main()
{
    string name;
    int count;

    string length;

    cout<<"Enter string: ";
    cin>>name;

    int n = name.length();
    for(int i = 0 ; i<n ; i++ )
    {
        count++;
    }
    if(count%2 == 0)
    cout<<"True";
    else
    cout<<"False";
}