#include <iostream>
using namespace std;

int main()
{
    int n, original, rem, reverse = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;
    int temp = n;

    while (temp > 0)
    {
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp = temp / 10;
    }

    if (original >= 0 && original == reverse)
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome";

    cout << "\nPalindrome numbers in a range:\n";

    int start, end;

    cout << "Enter starting and ending values: ";
    cin >> start >> end;

    for (int i = start; i <= end; i++)
    {
        int t = i, rev = 0;

        while (t > 0)
        {
            rem = t % 10;
            rev = rev * 10 + rem;
            t = t / 10;
        }

        if (i >= 0 && i == rev)
            cout << i << " ";
    }

    return 0;
}

