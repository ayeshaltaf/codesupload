#include<iostream>
using namespace std;
int main()
{
    int n,t,u;
    string ones[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    string teens[]={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
    string tens[]={"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
    cout<<"Enter a number (0-99): ";
    cin>>n;
    if(n<0 || n>99)
        cout<<"Invalid Number";
    else if(n<10)
        cout<<ones[n];
    else if(n<20)
        cout<<teens[n-10];
    else{
        t=n/10;
        u=n%10;
        cout<<tens[t];
        if(u!=0)
            cout<<" "<<ones[u];
    }
    return 0;
}
