#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;
     if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << "Leap Year";
            else
                cout << "Not a Leap Year";
        }
        else
            cout << "Leap Year";
    }
    else
        cout << "Not a Leap Year";

    cout << "\nNext 5 leap years:\n";

    int count = 0;

    for (int y = year + 1; count < 5; y++)
    {
        if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0))
        {
            cout << y << endl;
            count++;
        }
    }

    return 0;
}
