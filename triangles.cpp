#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three sides: ";
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a){
        cout<<"Valid Triangle"<<endl;
        if(a==b && b==c)
            cout<<"Equilateral Triangle";
        else if(a==b || b==c || a==c)
            cout<<"Isosceles Triangle";
        else
            cout<<"Scalene Triangle";
        if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
            cout<<endl<<"Right Angled Triangle";
    }
    else
        cout<<"Invalid Triangle";
    return 0;
}
