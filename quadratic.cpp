#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, d;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    int valid = (a != 0) ? 1 : 0;

    if (valid == 0)
        cout << "Invalid coefficient a";
    else
    {
        d = b*b - 4*a*c;

        if (d > 0)
        {
            float r1 = (-b + sqrt(d))/(2*a);
            float r2 = (-b - sqrt(d))/(2*a);

            cout << "Real and Distinct Roots\n";
            cout << "Root 1 = " << r1 << endl;
            cout << "Root 2 = " << r2;
        }
        else if (d == 0)
        {
            float r = -b/(2*a);

            cout << "Real and Equal Roots\n";
            cout << "Root = " << r;
        }
        else
        {
            float real = -b/(2*a);
            float imaginary = sqrt(-d)/(2*a);

            cout << "Imaginary Roots\n";
            cout << "Root 1 = " << real << " + "
                 << imaginary << "i" << endl;

            cout << "Root 2 = " << real << " - "
                 << imaginary << "i";
        }
    }

    return 0;
}
