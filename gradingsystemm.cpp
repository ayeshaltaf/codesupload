#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    float per;
    cout<<"Enter marks of 5 subjects: ";
    cin>>a>>b>>c>>d>>e;
    per=(a+b+c+d+e)/5.0;
    cout<<"Percentage = "<<per<<"%"<<endl;
    if(per>=90)
        cout<<"Grade A (Distinction)";
    else if(per>=75)
        cout<<"Grade B (First Division)";
    else if(per>=60)
        cout<<"Grade C (Second Division)";
    else if(per>=40)
        cout<<"Grade D (Pass)";
    else
        cout<<"Fail";
    return 0;
}
