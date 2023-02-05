#include <iostream>
using namespace std;

int main()
{
    string name;
    float amount;
    float total;
    bool flag=false;

    string fruit[4] = {"peach","apple","guava","watermelon"};
    int price[4] = {60,70,40,30};

    cout<<"Enter name of the fruit: ";
    cin>>name;
    cout<<"Enter quantity of the fruit: ";
    cin>>amount;

    for(int n = 0 ; n < 4 ; n++)
    {
        if(name == fruit[n])
        {
            total = price[n] * amount ;
            flag = true;
            break; 
        }
    }
    if(flag)
    cout<<"Your payable amount is : "<<total;
    else
    cout<<"Fruit name is invalid";
}