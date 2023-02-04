#include <iostream>
using namespace std;

main()
{
    int x;

    bool check;

    cout << "Enter the size of array : ";
    cin >> x;
    int number[x];

    for (int x = 0; x < x; x++)
    {
        cout << "Enter Number " << x + 1 << ": ";
        cin >> number[x];
    }

    for (int y = 0; y < x; y++)
    {
        int num = number[y];
        while (num > 0)
        {
            if (num % 10 == 7)
            {
                cout << "Boom!";
                check = true;
                break;
            }
            else
            {
                check = false;
            }
            num = num / 10;
        }
        if (check == true)
        {
            break;
        }
    }
    if (check == false)
    {
        cout << "there is no 7 in the array";
    }
}