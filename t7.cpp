#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
main()
{
    string name;
    string name1;
    cout<<"Enter string: ";
    cin>>name;
    cout<<"Enter another string: ";
    cin>>name1;
    int n = name.length();
    int y = name1.length();
    int count=0;
    for(int x=0; x<n; x++)
    {
        if(name[x]==name1[x])
        count=count+1;
        
    }
    cout<<"The common number of letters are: "<<count;
}