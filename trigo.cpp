#include <iostream>
using namespace std;

int main()

{	double rad,deg;
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
	cout<<ans;
	return 0;
	
}
