#include <iostream>
using namespace std;

int main()
{
    int choice;
    float balance = 1000, amount;

    do
    {
        cout << "\n\n BANKING MENU ";
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Balance Inquiry";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;

                if (amount > 0)
                {
                    balance += amount;
                    cout << "Amount Deposited";
                }
                else
                    cout << "Invalid Amount";
                break;

            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;

                if (amount <= 0)
                    cout << "Invalid Amount";
                else if (amount > balance)
                    cout << "Insufficient Balance";
                else
                {
                    balance -= amount;
                    cout << "Amount Withdrawn";
                }
                break;

            case 3:
                cout << "Current Balance = Rs " << balance;
                break;

            case 4:
                cout << "Thank You!";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(choice != 4);

    return 0;
}

