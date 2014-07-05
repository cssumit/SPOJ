#include<cstdio>
using namespace std;
int prime(int);
int rec(int n)
{
	if(n==1)
		return 1;
	else
	{
		int k=rec(n-1)+prime(n);
		printf("%d\n",k);
		return k;
	}
}
int prime(int n)
{
	int how=0;
	if(n==1)
		return 0;
	while(n%2==0)
	{
		n=n/2;
		how++;
	}
	int k=3;
	while(k*k<=n)
	{
		if(n%k==0)
		{
			n=n/k;
			how++;
		}
		else
		{
			k=k+2;
		}
	}
	if(n>2)
		how++;
	if(how%2==0)
		return how;
	else
		return how-1;
}
			
int main()
{
	int n;
	scanf("%d",&n);
	int ans=rec(n-1)+prime(n);
	printf("%d\n",ans);
	return 0;
}
