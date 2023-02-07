#include <iostream>
using namespace std;

int main()
{
    int n=0;
    int count=0;
    bool flag=false;
    string pin;
    string Moves[10] = {"Shimmy","Shake","Pirouette","Slide","Box Step","Headspin","Dosado","Pop","Lock","Arabesque"};
    char numbers[10] = {'0','1','2','3','4','5','6','7','8','9'};
    cout<<"Enter pin of exactly four digits :";
    cin>>pin;

    n = pin.length();

    for(int i=0 ; i<4 ; i++)
    {
        for(char j='0' ; j<='9' ; j++)
        {
            if(pin[i] == j)
            {
                count++;
            }
        }

    }

    if(count != 4 || n!= 4)
    cout<<"Invalid Input";
    else
    {
    int if1 = 0;
    int if2 = -1;

    for(int i=0 ; i < 4 ; i++)
    {
        for(int j=0 ; j<=9 ; j++)
        {
            if((i == 0) && (pin[i] == numbers[j]))
            {
            cout<<Moves[j];
            }
            if((i > 0) && (pin[i] == numbers[j]) )
            {
                if1=if1+1;

                if(if1+j>9)
                if1=if1-10;

                cout<<","<<Moves[if1+j];
            }
        }        
    }
    }
}