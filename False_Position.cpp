#include<bits/stdc++.h>
using namespace std;

double Function(double x)
{
    return (pow(x,3)-2*x-5);
}

int main()
{
    double a,b,c;
    cout<<"Enter two intervals: ";
    cin>>a>>b;
    std::cout<< std::fixed;
    std::cout<< std::setprecision(4);
    if(Function(a)*Function(b)<0){
        cout<<"Number\t "<<" a\t\t "<<" b\t\t "<<" x\t\t "<<" f(x)\t\t "<<endl;
        for(int i=0;i<100;i++){
            c=(a*Function(b)-b*Function(a))/(Function(b)-Function(a));
            cout<<i+1<<"\t"<<a<<"\t\t"<<b<<"\t\t"<<c<<"\t\t"<<Function(c)<<"\t\t"<<endl;
            if(Function(c)==0 || abs(Function(c))<0.0001)
                break;
            else if(Function(c)*Function(a)<0)
                b=c;
            else
                a=c;
        }
    }
else
{
    cout<<"Wrong input!!!";
    return 0;
}
cout<<"Root= "<<c;
return 0;
}
