#include<iostream>
#include<cstdio>
#define MOD 1000000007
using namespace std;
unsigned long long wf[200001];
unsigned long long wfunc(unsigned long long a,unsigned long long b,unsigned long long c,unsigned long long n)
{
	if(n==1)
	{
		wf[1]=1;
		return 1;
	}
	else
	{
		wf[n]=(a*wf[n/2]+b*n+c)%MOD;
		return wf[n];
	}
			
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		for(int i=0;i<200001;i++)
			wf[i]=0;
		unsigned long long a,b,c,n;
		scanf("%llu%llu%llu%llu",&a,&b,&c,&n);
		unsigned long long ans=0;
		for(int i=1;i<=n;i++)
			ans+=wfunc(a,b,c,i);
		printf("%llu\n",ans);
	}
	
	return 0;
}
