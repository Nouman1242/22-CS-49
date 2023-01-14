#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cmath>
#include<windows.h>
using namespace std;
main()
{
    int date;
    string month;
    cout<<"Enter the date :";
    cin>>date;
    cout<<"Enter the month: ";
    cin>>month;
    if((month=="January" &&date>=20) || (month=="February" && date<=18))
    {
        cout<<"Aquarius"<<endl;
    }
    if((month=="February" && date>=19) || (month=="March" && date<=20))
    {
        cout<<"Pisces"<<endl;
    }if((month=="March" &&date>=20) || (month=="April" && date<=19))
    {
        cout<<"Aries"<<endl;
    }if((month=="April" &&date>=20) || (month=="May" && date<=20))
    {
        cout<<"Taurus"<<endl;
    }if((month=="May" &&date>=21) || (month=="June" && date<=20))
    {
        cout<<"Gemini"<<endl;
    }if((month=="June" &&date>=21) || (month=="July" && date<=22))
    {
        cout<<"Cancer"<<endl;
    }if((month=="July" &&date>=23) || (month=="August" && date<=22))
    {
        cout<<"Leo"<<endl;
    }if((month=="August" &&date>=23) || (month=="September" && date<=22))
    {
        cout<<"Virgo"<<endl;
    }if((month=="September" &&date>=23) || (month=="October" && date<=22))
    {
        cout<<"Libra"<<endl;
    }if((month=="October" &&date>=23) || (month=="November" && date<=21))
    {
        cout<<"Scorpio"<<endl;
    }if((month=="November" &&date>=22) || (month=="December" && date<=21))
    {
        cout<<"Sigattirus"<<endl;
    }if((month=="December" &&date>=22) || (month=="January" && date<=19))
    {
        cout<<"Capricon"<<endl;
    }
}