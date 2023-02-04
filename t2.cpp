#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
main()
{
    string movies[5]={"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    string name;
    cout<<"Enter movie name(Gladiator, StarWars, Terminator, TakingLives, TombRider): ";
    cin>>name;
    for(int y=0; y<5;y++)
    {
        if (name==movies[y])
        {
            if(y%2==0)
            {
                int price= 500-((500/100)*10);
                cout<<price;
            }
            if(y%2!=0)
            {
                int ans= 500-((500/100)*5);
                cout<<ans;
            }
        }
    }
}