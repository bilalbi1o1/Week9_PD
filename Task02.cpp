#include <iostream>
using namespace std;

int main()
{
    string name;
    float price = 500;

    string movies[5] = {"Spiderman","Batman","Thor","Ironman","Drstrange"};
    

    cout<<"Enter name of the movie: ";
    cin>>name;

    for(int n = 0 ; n < 5 ; n++)
    {
        if(movies[n] == name)
        {
            if(n%2 != 0)
            price = price - price*0.1;
            else
            price = price - price*0.05;
        }
    }
    cout<<"Price of the ticket after discount is: "<<price;
}