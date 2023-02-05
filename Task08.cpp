#include <iostream>
using namespace std;

int main()
{
    int num;
    int count=0;
    string check;

    cout<<"Enter how many colors you wan to enter: ";
    cin>>num;

    string color[num];

    for(int i=0 ; i<num ; i++)
    {
        cout<<"Enter a color :";
        cin>>color[i];
    }
    check = color[0];

        for(int i=0 ; i<num ; i++)
        {
            if(check == color[i])
            {
                count = count + 2;
            }
            else{
                    count = count + 3;
                    check = color[i];
                }
        }
        cout<<count;

    
}