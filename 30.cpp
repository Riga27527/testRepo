#include<iostream>
#include<cmath>

using namespace std;

 int fflag(int x)
 {
 		int flag=1;
		for(int i=2;i<=sqrt((double)x);i++)
		{
			if((x%i==0)&&(x!=i))
				flag=0;
		}
		if(flag)
			return 1;
		else 
			return 0;
 }
 
int main()
{
	int n;
	for(n=4;n<=2000;n+=2)
	{
		for(int i=2;i<n;i++)
		if((fflag(i))&&(fflag(n-i)))
			{
				cout<<n<<"="<<i<<"+"<<n-i<<'\n';
				break;
			}
	}

	return 0;
 } 
 

