#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a=1.5, b = 1.5, c=1.5, d, x1, x2;
    cin>>a>>b>>c;
    d=(b*b) - (4*a*c);
    if (d==0)
    {
        x1=(-b + sqrt(d)) / (2*a);
        x2=(-b - sqrt(d)) / (2*a);
        cout<<x1<<endl;
        cout<<x2<<endl;
    }
    if (d>0)
    {
        x1=(-b + sqrt(d)) / (2*a);
        x2=(-b - sqrt(d)) / (2*a);
        cout<<x1<<endl;
        cout<<x2<<endl;
    }
    if(d<0)
    {
        cout<<"Нет вещественных корней"<<endl;
    }   return 0;
}