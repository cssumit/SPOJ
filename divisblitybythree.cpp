#include<cstdio>
#define MOD 1000000007
using namespace std;
int main()
{
	unsigned long long ans,n,a=1,m,fin=1;
	while(scanf("%llu",&n)!=EOF)
	{
	fin=1;
	while(n>1)
	{
		m=n;
		ans=2;
		a=1;
		while(m>1)
		{
			m/=2;
			a*=2;
			ans=(ans*ans)%MOD;
		}
		n=n-a;
		fin=(ans*fin)%MOD;
	}
	if(n==1)
	{
		fin=(fin*2)%MOD;
		fin=(fin-2)%MOD;
	}
	else
	{
		fin=(fin-1)%MOD;
	}
	fin=(fin*333333336)%MOD;
	fin++;
	printf("%llu\n",fin);
	}
	return 0;
}
		
