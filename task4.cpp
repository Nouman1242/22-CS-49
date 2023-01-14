#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cmath>
#include<windows.h>
using namespace std;
main()
{
    system("cls");
    char n1,n2;
    int time;
    cout<<"Press 'r' for regular service or press 'p' for premium service: ";
    cin>>n1;
    cout<<"Press 'n' for night rate or press 'd' for day rate: ";
    cin>>n2;
    cout<<"Enter the number of minutes you used:  ";
    cin>>time;
    if (n1=='r' && time>50)
    {
        float ammount;
        ammount = 10+((time-50)*0.2);
        cout<<"The payable amount is: "<<ammount;   
    }
    else if (n1=='r'&& time<50)
    {
        float ammount;
        ammount = time*10;
        cout<<"The payable amount is: "<<ammount;
    }
    if (n1=='p' && n2=='d')
    {
        float ammount;
        if(time>75)
        {
            ammount=25+((time-75)*0.1);
            cout<<"The payable amount is: "<<ammount;
        }
    }
    if (n1=='p' && n2 =='n')
    {
        float ammount;
        if(time>100)
        {
            ammount=25+((time-100)*0.1);
            cout<<"The payable amount is: "<<ammount;
        }
    }

}