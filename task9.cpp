#include <iostream>
#include<cmath>
#include<windows.h>
using namespace std;
main()
{
    int pin;
    cout<<"Enter four digit pin: ";
    cin>>pin;
    string dance[10]={"Shimmy","Shake","Pirouette","Slide","Box Step","Headspin","Dosado","Pop","Lock","Arabesque"};
    int ans;
    string z;
    ans = pin%10;
    pin= pin/10;
    int result;
    result=pin%10;
    pin=pin/10;
    int remainder;
    remainder= pin%10;
    pin=pin/10;
    int common;
    common=pin%10;
    pin=pin/10;
    common=common;
    if(common>9)
    {
        common=common-10;
        cout<<dance[common];
    }
    else
    cout<<dance[common];
    remainder=remainder+1;
    if(remainder>9)
    {
        remainder=remainder-10;
        cout<<","<<dance[remainder];
    }
    else
    cout<<","<<dance[remainder];
    result=result+2;
    if(result>9)
    {
        result=result-10;
        cout<<","<<dance[result];
    }
    else
    cout<<","<<dance[result];
    ans = ans +3;
    if (ans>9)
    {
        ans= ans-10;
        cout<<","<<dance[ans];
    }
    else
    cout<<","<<dance[ans];   
}