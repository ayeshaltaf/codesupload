#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,large,small;
    cout<<"Enter four numbers: ";
    cin>>a>>b>>c>>d;
    large=small=a;
    if(b>large) large=b;
    if(c>large) large=c;
    if(d>large) large=d;
    if(b<small) small=b;
    if(c<small) small=c;
    if(d<small) small=d;
    cout<<"Largest = "<<large<<endl;
    cout<<"Smallest = "<<small;
    return 0;
}
