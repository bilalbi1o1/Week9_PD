#include <iostream>
using namespace std;

int main()
{
    string s1,s2;
    int count=0;
    cout<<"Enter first string :";
    cin>>s1;
    cout<<"Enter second string :";
    cin>>s2;

    int num1 = s1.length();
    int num2 = s2.length();

    for(int i=0 ; i<num2 ; i++)
    {
        for(int j=0 ; j<num1 ; j++)
        {
        if(s1[j] == s2[i])
        {
            count++;
            s1[j] = '|';
            s2[i] = '/';
        }
       }
    }
    cout<<count<<" numbers are matching";
}