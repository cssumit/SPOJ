#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
long long gcd2(long long,long long);
long long gcd(long long,char*);
int main()
{
	char ar[251];
	long long res[251];
	long long b;
	long long ans;
	long long t;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&b);
		scanf("%s",ar);
		if(b==0)
		{
			printf("%s\n",ar);
		}
		else
		{
			ans=gcd(b,ar);
			printf("%lld\n",ans);
		}
	}
	return 0;
}
long long gcd(long long a,char* br)
{
	int len=strlen(br);
	long long val=0;
	if(br[0]=='0')
	{
		return a;
	}
	else
	{
		int i=0;
		while(i<len)
		{
			val=val*10+(long long)br[i]-48;
			val=val%a;
			i++;
//			printf("val=%lld\n",val);
		}
		return gcd2(val,a);
	}
}
long long gcd2(long long a,long long b)
{
	if(a==0)
	{
		return b;
	}
	else if(b==0)
	{
		return a;
	}
	else
	{
		return gcd2(b%a,a);
	}
}
