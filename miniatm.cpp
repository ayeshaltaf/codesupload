#include<iostream>
using namespace std;
int main()
{
    int ch;
    float balance=10000,amount;
    do{
        cout<<"\n1. Balance Inquiry";
        cout<<"\n2. Cash Withdrawal";
        cout<<"\n3. Cash Deposit";
        cout<<"\n4. Exit";
        cout<<"\nEnter choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"Current Balance = Rs. "<<balance;
                break;
            case 2:
                cout<<"Enter withdrawal amount: ";
                cin>>amount;
                if(amount<=balance && amount>0){
                    balance=balance-amount;
                    cout<<"Withdrawal Successful";
                    cout<<"\nRemaining Balance = Rs. "<<balance;
                }
                else
                    cout<<"Insufficient Balance or Invalid Amount";
                break;
            case 3:
                cout<<"Enter deposit amount: ";
                cin>>amount;
                if(amount>0){
                    balance=balance+amount;
                    cout<<"Deposit Successful";
                    cout<<"\nUpdated Balance = Rs. "<<balance;
                }
                else
                    cout<<"Invalid Amount";
                break;
            case 4:
                cout<<"Thank You!";
                break;
            default:
                cout<<"Invalid Choice";
        }
    }while(ch!=4);
    return 0;
}
