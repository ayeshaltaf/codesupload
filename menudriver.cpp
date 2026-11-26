#include<iostream>
using namespace std;
int main()
{
    int ch,n,i,fact=1,sum=0,temp,rem,rev=0,count=0;
    cout<<"1. Factorial"<<endl;
    cout<<"2. Prime Number Check"<<endl;
    cout<<"3. Armstrong Number Check"<<endl;
    cout<<"4. Palindrome Number Check"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter choice: ";
    cin>>ch;
    if(ch==5)
        return 0;
    cout<<"Enter a number: ";
    cin>>n;
    switch(ch){
        case 1:
            if(n<0){
                cout<<"Factorial not possible";
                break;
            }
            for(i=1;i<=n;i++)
                fact=fact*i;
            cout<<"Factorial = "<<fact;
            break;
        case 2:
            if(n<=1){
                cout<<"Not Prime";
                break;
            }
            for(i=2;i<n;i++){
                if(n%i==0)
                    break;
            }
            if(i==n)
                cout<<"Prime Number";
            else
                cout<<"Not Prime";
            break;
        case 3:
            if(n<0){
                cout<<"Not Armstrong";
                break;
            }
            temp=n;
            int digits;
            digits=0;
            do{
                digits++;
                temp=temp/10;
            }while(temp!=0);
            temp=n;
            while(temp!=0){
                rem=temp%10;
                int p=1;
                for(i=1;i<=digits;i++)
                    p=p*rem;
                sum=sum+p;
                temp=temp/10;
            }
            if(sum==n)
                cout<<"Armstrong Number";
            else
                cout<<"Not Armstrong";
            break;
        case 4:
            temp=n;
            while(temp>0){
                rem=temp%10;
                rev=rev*10+rem;
                temp=temp/10;
            }
            if(n>=0 && rev==n)
                cout<<"Palindrome Number";
            else
                cout<<"Not Palindrome";
            break;
        default:
            cout<<"Invalid Choice";
    }
    return 0;
}
