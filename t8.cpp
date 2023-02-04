#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
main()
{
    int x;
    cout<<"Enter number of colors you want to enter: ";
    cin>>x;
    string color[x];
    for (int y=0; y<x; y++)
    {
        cout<<"Enter "<<y+1<<" color: ";
        cin>>color[y];
    }
    int ans;
    int count=0;
    for (int y=0; y<x; y++)
    {
        if(color[y]!=color[y+1])
        {
            count=count+1;
        }
        ans = (x*2)+(count*1)-1;  
    }
    cout<<ans; 
}
