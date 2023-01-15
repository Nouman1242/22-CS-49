# include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cmath>
#include<windows.h>
using namespace std;

int border(int height, int x, int y);

int main()
{

    int height, x, y;
    cout <<"enter height: ";
    cin >> height;

    cout <<"enter x cordinate: ";
    cin >> x;

    cout <<"enter y cordinate: ";
    cin >> y;


    border(height, x, y);

    getch();
}

int border(int height,int x,int y)
{
    
    int h1 = height * 3;
    int h2 = height * 4;
    


    if ((x == 0 || x == h1) && (y >= 0 && y <= height) )
    {
        cout << "border ";
        getch();    
    }
    if ((y == 0 ) && (x >= 0 && x <= h1 ) )
    {
        cout << "border ";
        getch();
    }
    if ((y == height ) && ((x >= 0 && x <= height ) || (x >= height * 2 && x <= h1)) )
    {
        cout << "border ";
        getch();
    }
    if ((x == height || x == height *2) && (y >= height ||  y <= height*2))
    {
        cout << "border ";
        getch();    
    }
    if ((y == h2) && (x >= height &&  x <= height*2))
    {
        cout << "border ";
        getch();    
    }



    if ((x > 0 && x < h1) && (y > 0 && y <height ) )
    {
        cout << "inside ";
        getch();    
    }
    if ((x > height && x < height *2) && (y > 0 &&  y < h2))
    {
        cout << "inside ";
        getch();    
    }
    cout << "outside";
    getch():
}
