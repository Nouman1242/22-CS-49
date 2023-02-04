#include<iostream>
#include<cmath>
#include<windows.h>
using namespace std;
main()
{
    int number[3];
    int num;
    cout<<"Enter number of times even-odd transformation need to be done:";
    cin>>num;
    for(int y=0; y<3;y++)
    {
        cout<<"Enter "<<y+1<<" number: ";
        cin>>number[y];
       
    }
    for(int y=0; y<3;y++)
    {
         int ans;
        if(number[y]%2==0)
        {
            ans = number[y]+((-2)*num);
            cout<<"The Even transformed number is "<<ans<<endl;
        }
        if(number[y]%2!=0)
        {
            ans = number[y]+((+2)*num);
            cout<<"The odd transformmed number is : "<<ans<<endl;
        }
 
    }
}