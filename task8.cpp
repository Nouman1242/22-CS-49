#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cmath>
#include<windows.h>
using namespace std;
main()
{
    system("cls");
    int h,h1,h2;
    int x, y;
    cout <<"Enter h: ";
    cin >> h;
    cout <<"Enter x coordinate: ";
    cin >> x;
    cout <<"Enter y coordinate: ";
    cin >> y;
    h1=2*h;
    h2=4*h;
    if ((x < h && x>0) && (y < h2 && y>0))
    {
        cout <<"Inside";
    }
    if ((x < 6 && y!=0) && (y > 8))
    {
        cout <<"Outside";
    }
    if ((x > 6) && (y < 8 && y!=0))
    {
        cout <<"Outside";
    }
    if ((x > 6) && (y > 8))
    {
        cout <<"Outside";
    }
    if(x==2 || x==4 || x==6)
    {
        cout <<"Border";
    }
    if(x==2 && (y<8))
    {
         cout <<"Border";
    }
    if(x==4 && (y<8))
    {
        cout <<"Border";
    }
    if(x==6 && (y<8))
    {
        cout <<"Border";
    }
    if(x==0 && y==0)
    {
        cout <<"Border";
    }
}