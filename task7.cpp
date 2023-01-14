#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<cmath>
#include<windows.h>
using namespace std;
void findTime(int, int, int, int);
main()
{
    system("cls");
    int startHour, startMin, arrivalHour, arrivalMin;
    cout <<"enter exam starting time hours: ";
    cin >> startHour;
    cout <<"enter exam starting time min: ";
    cin >> startMin;

    cout <<"enter arrival time hours: ";
    cin >> arrivalHour;
    cout <<"enter arrival time min: ";
    cin >> arrivalMin;


    findTime(startHour,startMin, arrivalHour, arrivalMin);

    getch();
}

void findTime(int start_hour,int start_min,int arrival_hour,int arrival_min)
{
    string ans;
    float diff_time;
    int diff_time_hours,  diff_timeMin; 
    int exam_time = (start_hour * 60) + (start_min);
    int arrival_time = (arrival_hour * 60) + (arrival_min);
    diff_time = exam_time - arrival_time;
    diff_time_hours = diff_time / 60;
    diff_timeMin = diff_time - (60 * diff_time_hours);
    if (diff_time < 0)
    {
        ans = "late";
    }
     else if (diff_time <= 30)
     {
        ans = "on time"; 
     }
     else if(diff_time > 30)
     {
        ans ="too early";
     }
     cout << ans<< endl;

    if (diff_time_hours == 0)
    {
        if (diff_timeMin < 0)
            cout << diff_timeMin * -1 ;
        if (diff_timeMin >= 0)
            cout << diff_timeMin * 1 ;
        cout << " minutes ";
    }
    else 
    {
        if (diff_time_hours < 0 || diff_timeMin < 0)
            cout << diff_time_hours * -1<< ":"<< diff_timeMin * -1 ;
            if (diff_time_hours >= 0 or diff_timeMin >= 0)
            cout << diff_time_hours * +1<< ":"<< diff_timeMin * +1 ;
        cout << " hours ";
    }

    if (diff_time_hours < 0 || diff_timeMin < 0)
        cout << " after the start" ;
        else if (diff_time_hours >= 0 || diff_timeMin >= 0)
        cout << " before the start";

}
