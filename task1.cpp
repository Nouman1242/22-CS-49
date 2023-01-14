#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cmath>
#include<windows.h>
using namespace std;
main()
{
string temp;
string humidity;
cout<<"Enter the temperature(warm,cold): ";
cin>>temp;
cout<<"Enter the humidity(dry,humid): ";
cin>>humidity;
if (temp=="warm" && humidity=="humid")
{
    cout<<"swim";
}
if(temp=="warm" && humidity=="dry")
{
    cout<<"Play tennis";
}
if (temp=="cold" && humidity=="dry")
{
    cout<<"Play basketball";
}
if (temp== "cold" && humidity=="humid")
{
    cout<<"Watch Tv";
}
}