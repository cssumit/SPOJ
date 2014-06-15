#include<iostream>
#include<cstdio>
using namespace std;
unsigned long long mod=109546051211;
int main()
{
	unsigned long long n;
	scanf("%lld",&n);
	unsigned long long a=1,b=1;
	if(n>587117)
	{
		printf("0\n");
	}
	else
	{
		for(unsigned long long int i=1;i<=n;i++)
		{
			a=(a*i)%mod;
			b=(b*a)%mod;
		}
		printf("%lld\n",b);
	}
	return 0;
}
