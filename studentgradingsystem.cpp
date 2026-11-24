#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3, m4, m5;
    int fail = 0;

    cout << "Enter marks in 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    if (m1 < 40) fail++;
    if (m2 < 40) fail++;
    if (m3 < 40) fail++;
    if (m4 < 40) fail++;
    if (m5 < 40) fail++;

    float percentage = (m1+m2+m3+m4+m5)/5.0;

    cout << "Percentage = " << percentage << "%" << endl;

    if (fail > 1)
        cout << "Repeat Year";
    else
    {
        if (percentage >= 90)
            cout << "Grade A";
        else if (percentage >= 80)
            cout << "Grade B";
        else if (percentage >= 70)
            cout << "Grade C";
        else if (percentage >= 60)
            cout << "Grade D";
        else
            cout << "Grade F";
    }

    return 0;
}
