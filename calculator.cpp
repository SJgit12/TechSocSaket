#include <iostream>
using namespace std;

int main()
{
    int o,num1,num2,ans=0;
    cout<<"this is a calculator     ";
    cout<<"1. addition  2.subtraction   3.multiplication    4.division   5.exponent     6.Quit  ";
    cin >>o;
    
    while (o!=6)
    {
    cout<<"enter the two numbers:";
    cout<<"the first number: ";
    cin>>num1;
    cout<<"the second number: ";
    cin>>num2;
        if (o==1)
    {
        ans=num1+num2;
        cout<<"the sum of "<<num1<<" and "<<num2 <<" is "<<ans<<endl;
    }
    else if(o==2)
    {
        if (num1>num2)
        {
            ans=num1-num2;
            cout<<"the difference of "<<num1<<" and "<<num2 <<" is "<<ans<<endl;

        }
        else
        {
            ans=num2-num1;
            cout<<"the difference of "<<num2<<" and "<<num1 <<" is "<<ans<<endl;
        }
    }
    else if(o==3)
    {
        ans=num1*num2;
        cout<<"the product of "<<num2<<" and "<<num1 <<" is "<<ans<<endl;

    }
    else if(o==4)
    {
        if(num2!=0)
        {
            ans=num1/num2;
            cout<<"on division of "<<num2<<" by "<<num1 <<" we get "<<ans<<endl;
        }
        else
        {
            cout<<" error: cannot divide by zero";
        }
    }
    else if(o==5)
    {
        int i=1,expo=num1;
        while(i<num2)
        {
            expo*=num1;
            i++;
        }
        ans=expo;
        cout<<1<<" to the power of "<<num2 <<" is "<<ans<<endl;
    }
    cout<<"1. addition  2.subtraction   3.multiplication    4.division   5.exponent     6.Quit";
    cin >>o;
    }
    
    
    return 0;
}