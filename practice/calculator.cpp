#include <iostream>
using namespace std;

int main()
{
    double o,num1,num2,ans=0;
    cout<<"this is a calculator     ";
    cout<<"1. addition  2.subtraction   3.multiplication    4.division   5.exponent     6.Trigonometry      7.Quit  ";
    cin >>o;
    
    while (o!=7)
    {
        if (o!=6){
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
        }
    else if(o==6){
        double rad,deg,cos,tan;
        cout<<"enter value in degrees "<<endl;
        
	cin>>deg;
	rad=(deg*3.14159625)/180;
	
	double ans;
	double sum1=0;
	for(int i=1;i<=21;i+=4)
	{
		double res=1,pro=1;
		for(int j=1;j<=i;j++)
		{
			res=res*rad;
			pro*=j;
			
		}
		res/=pro;
		sum1+=res;	
	}
	
	double sum2=0;
	for(int i=3;i<=23;i+=4)
	{
		double res=1,pro=1;
		for(int j=1;j<=i;j++)
		{
			res=res*rad;
			pro*=j;
			
		}
		res/=pro;
		sum2+=res;	
	}

	ans=sum1-sum2;
	double ansc;
	double sum3=0;
	for(int i=0;i<=20;i+=4)
	{
		double res=1,pro=1;
		for(int j=1;j<=i;j++)
		{
			res=res*rad;
			pro*=j;
			
		}
		res/=pro;
		sum3+=res;	
	}
	
	double sum4=0;
	for(int i=2;i<=22;i+=4)
	{
		double res=1,pro=1;
		for(int j=1;j<=i;j++)
		{
			res=res*rad;
			pro*=j;
			
		}
		res/=pro;
		sum4+=res;	
	}

	ansc=sum3-sum4;
	cout<<"the value of sine is "<<ans<<endl;
    cout<<"the value of cos is "<<ansc<<endl;
    cout<<"the value of tan is "<<ans/ansc<<endl;
	
    }
    else if(0!=7){
        cout<<"error"<<endl;
    
    }
    cout<<"1. addition  2.subtraction   3.multiplication    4.division   5.exponent     6.Trigonometry      7.Quit";
    cin >>o;
    }
    
    
    return 0;
}