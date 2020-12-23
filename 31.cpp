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
 
int reverse4(int y)
{
	int new_num=0;
	if(y%10)
	{
		for(int i=y;i>0;i/=10)
			new_num = new_num*10 + i%10;
		return new_num;
	}
	else 
		return 0;
}

int main()
{
	int n,count=0,reverse=0;
	for(n=10;n<1000;n+=1)
	{
		if(fflag(n))
		{
			reverse = reverse4(n);
			if(n==reverse)
			{
				if(fflag(reverse))
				{
					count++;
					cout<<"No "<<count<<":"<<n<<"and"<<reverse<<'\n';
				}
			}	
		}

			
	}

	return 0;
 } 
 

