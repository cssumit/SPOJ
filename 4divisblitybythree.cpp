#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
unsigned long long maps[1000000007]={0};
unsigned long long func(unsigned long long n)
{
	unsigned long long ans=2;
	if(n==1)
		return 1;
	else 
	{
		if(maps[n]!=0)
		{
			return maps[n];
		}
		else
		{
			if(n%2==0)
			{
				ans=(ans*func(n-1))%1000000007;
				maps[n]=ans;
				return ans;
			}
			else 
			{
				ans=(((ans*func(n-1))%1000000007)-1)%1000000007;
				maps[n]=ans;
				return ans;
			}
		}
	}
}
int main()
{
	unsigned long long n;
	while(scanf("%llu",&n)!=EOF)
	{
		if(n%1000000006==0 && n!=0)
		{	printf("1\n");
			maps[0]=1;
			maps[1000000006]=1;
		}
		else
		{
			n=n%1000000006;
			unsigned long long ans=func(n);
			printf("%lld\n",ans);
		}
	}
	return 0;
}
	
