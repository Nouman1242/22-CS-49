#include <iostream>
#include<cmath>
#include<windows.h>
using namespace std;
main()
{
    string word;
    int length;
    int count = 0;
    cout << "Enter a word: ";
    cin >> word;
    for (int x = 0; word[x] != '\0'; x++)
    {
        count=count+1;
    }

    cout << count<<endl;

    if (count % 2 == 0)
    {
        cout << "true";
    }
    if (count % 2 != 0)
    {
        cout << "false";
    }
}