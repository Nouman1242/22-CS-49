#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
main()
{
    string name;
    cout<<"Enter Fruit name: ";
    cin>>name;
    int quan;
    cout<<"Enter the quantitiy: ";
    cin>>quan;
    string fruit[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};
    for(int x=0; x<4; x++)
    {
        if (name==fruit[x])
        {
            int ans;
            ans = price[x]*quan;
            cout<<"The total bill is: "<<ans;  
        }
    }
}