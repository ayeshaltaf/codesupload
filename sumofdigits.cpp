#include <iostream>
using namespace std;

int main()
{
    int n, rem;
    int sum = 0, product = 1;

    cout << "Enter an integer: ";
    cin >> n;

    if (n < 0)
        n = -n;

    int temp = n;

    if (n == 0)
        product = 0;

    while (temp > 0)
    {
        rem = temp % 10;

        sum = sum + rem;
        product = product * rem;

        temp = temp / 10;
    }

    cout << "Sum of digits = " << sum << endl;
    cout << "Product of digits = " << product;

    return 0;
}

