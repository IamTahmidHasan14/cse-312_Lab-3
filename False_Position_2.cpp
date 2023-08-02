#include<bits/stdc++.h>
using namespace std;

double Function(double x)
{
    return ((4*exp((-1)*x))*sin(x)-1);
}
int main()
{
    double a,b,c;
    cout<<"Enter two intervals: ";
    cin>>a>>b;
    std::cout<< std::fixed;
    std::cout<< std::setprecision(3);
    if(Function(a)*Function(b)<0)
    {
        cout<<"   a     "<<"          b     "<<"         x   "<<"           f(x)"<<"          no    "<<endl;
        for(int i=0;i<50;i++)
        {
            c=(a*Function(b)-b*Function(a))/(Function(b)-Function(a));
            cout<<a<<"\t\t"<<b<<"\t\t"<<c<<"\t\t"<<Function(c)<<"\t\t"<<i+1<<endl;
        if(Function(c)==0)
            break;
        else if(Function(c)*Function(a)<0)
            b=c;
        else
            a=c;
        }
    }
    else
    {
        cout<<"Wrong interval input";
        return 0;
    }
    cout<<"Root= "<<c;

return 0;
}
