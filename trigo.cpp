#include <iostream>
using namespace std;

int main()
	
{	double rad,deg,cos,tan;
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
	cout<<ans;
	cout<<ansc;
	cout<<ans/ansc;
	return 0;
	
}
