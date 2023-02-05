
#include <iostream>
using namespace std;

int main()
{
    int count=0;
    int number;   
    int n;

    cout<<"Enter how many numbers you want to enter in array : ";
    cin>>number;

    int num[number];

    for(int i = 0 ; i<number ; i++ )
    {
        cout<<"Enter a number : ";
        cin>>num[i];
    }

    cout<<"Enter how many times you want to apply the even odd trnsformation : ";
    cin>>n;

    for(int i = 0 ; i<n ; i++ )
    {
        for(int j = 0 ; j<number ; j++ )
        {
            if(num[j]%2 == 0)
            num[j]=num[j]-2;
            else
            num[j]=num[j]+2;
        }
    }
    cout<<"Required array is :"<<endl;

    for(int i=0 ; i<number ; i++)
    {
        cout<<num[i]<<",";
    }
}