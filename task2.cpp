#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cmath>
#include<windows.h>
using namespace std;
main()
{
    float subject1,subject2,subject3,subject4,subject5;
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter English marks= ";
    cin>>subject1;
    cout<<"Enter Maths marks= ";
    cin>>subject2;
    cout<<"Enter Chemistry marks= ";
    cin>>subject3;
    cout<<"Enter Social Science marks= ";
    cin>>subject4;
    cout<<"Enter Biology marks= ";
    cin>>subject5;
    float percentage=100*(subject1+subject2+subject3+subject4+subject5)/500;
    if(percentage>=90 && percentage<=100)
    {
        cout<<"A+"<<endl;
    }
    if(percentage>=80 && percentage<=89)
    {
        cout<<"A"<<endl;
    }if(percentage>=70 && percentage<=79)
    {
        cout<<"B+"<<endl;
    }if(percentage>=60 && percentage<=69)
    {
        cout<<"B"<<endl;
    }if(percentage>=50 && percentage<=59)
    {
        cout<<"C"<<endl;
    }
    if(percentage>=40 && percentage<=49)
    {
        cout<<"D"<<endl;
    }
    if(percentage<=39 )
    {
        cout<<"F"<<endl;
    }
    cout<<name;
}