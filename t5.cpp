#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
main()
{
    string check[4];
    for(int y=0; y<4; y++)
    {
        cout<<"Enter string: ";
        cin>>check[y];
    }
    if(check[0]==check[1] && check[0]==check[2] && check[0]==check[3])
    {
        cout<<"True"<<endl;
    }
    else
    cout<<"False"<<endl;
}