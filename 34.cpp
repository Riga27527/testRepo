#include<iostream>
#include<cmath>
#include<new>

using namespace std;

int fflag(int x)
{	
	int flag=1;
	if((x==2)||(x==3))
		return flag;
	for(int i=2;i<=sqrt((double)x);i++)
	{
		if(x%i==0)
			flag=0;
	}
	return flag;
}


int main()
{
	int num=0;
	for(int i=3;i<=1993;i+=2)
		if(fflag(i))
			++num;
	int *arrow = new int[num+1];
	arrow[0] = 2;
	int j=1;
	for(int i=3;i<=1993;i+=2)
		if(fflag(i))
			arrow[j++]=i;
	
	int count = 0;
	for(int i=num;i>=0;i--)
		for(int j=0;j<i;j++)
			
			if(arrow[i]-arrow[j]==1898)
				{
						count++;
						cout<<arrow[i]<<"-"<<arrow[j]<<"=1898"<<'\n';
				}
	delete [] arrow;
	return 0;
			
} 




