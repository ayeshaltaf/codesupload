#include <iostream>
using namespace std;

int main()
{
    int d, m, y;

    cout << "Enter date (DD MM YYYY): ";
    cin >> d >> m >> y;

    int days[] = {0,31,28,31,30,31,30,
                  31,31,30,31,30,31};

    if (y <= 0)
        cout << "Invalid Year";

    else
    {
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            days[2] = 29;

        if (m < 1 || m > 12)
            cout << "Invalid Month";

        else if (d < 1 || d > days[m])
            cout << "Invalid Day";

        else
        {
            cout << "Valid Date" << endl;

            int month = m;
            int year = y;

            if (month < 3)
            {
                month = month + 12;
                year--;
            }

            int k = year % 100;
            int j = year / 100;

            int h = (d + 13*(month+1)/5 + k +
                     k/4 + j/4 + 5*j) % 7;

            cout << "Day of the week: ";

            switch(h)
            {
                case 0:
                    cout << "Saturday";
                    break;

                case 1:
                    cout << "Sunday";
                    break;

                case 2:
                    cout << "Monday";
                    break;

                case 3:
                    cout << "Tuesday";
                    break;

                case 4:
                    cout << "Wednesday";
                    break;

                case 5:
                    cout << "Thursday";
                    break;

                case 6:
                    cout << "Friday";
                    break;
            }
        }
    }

    return 0;
}

