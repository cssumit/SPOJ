#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
map<unsigned long long ,unsigned long long> maps;
unsigned long long func(unsigned long long n)
{
	map<unsigned long long,unsigned long long>::iterator it;
	unsigned long long ans=2;
	if(n==1)
		return 1;
	else 
	{
		it=maps.find(n);
		if(it!=maps.end())
		{
			return it->second;
		}
		else
		{
			if(n%2==0)
			{
				ans=(ans*func(n-1))%1000000007;
				maps.insert(pair<unsigned long long,unsigned long long>(n,ans));
				return ans;
			}
			else 
			{
				ans=(((ans*func(n-1))%1000000007)-1)%1000000007;
				maps.insert(pair<unsigned long long,unsigned long long>(n,ans));
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
		n=n%1000000007;
		unsigned long long ans=func(n);
		printf("%lld\n",ans);
	}
	return 0;
}
	
