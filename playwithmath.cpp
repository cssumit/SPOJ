#include<iostream>
#include<cstdio>
using namespace std;
int gcd(long long a,long long b)
{
	if(a%b==0)
		return b;
	else
		long long c=gcd(b,a%b);
}
int main()
{
	long long a,b;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&a,&b);
		if(a>b)
		{
			long long gc=gcd(a,b);
			b=b/gc;
			a=a/gc;
			printf("%lld %lld\n",b,a);
		}
		else if(a<b)
		{
			long long gc=gcd(b,a);
			b=b/gc;
			a=a/gc;
			printf("%lld %lld\n",b,a);
		}
		else
		{
			printf("1 1\n");
		}
	}
	return 0;
}
	
