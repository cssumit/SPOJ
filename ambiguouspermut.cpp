#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	while(1)
	{
		long long n;
		scanf("%lld",&n);
		if(n==0)
		{
			return 0;
		}
		long long a[n+1];		
		for(int i=1;i<=n;i++)
		{
			scanf("%lld",&a[i]);
		}
		int flag=0;
		for(int i=1;i<=n;i++)
		{
			if(i!=a[a[i]])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			printf("not ambiguous\n");
		}
		else
		{
			printf("ambiguous\n");
		}
	}
	return 0;
}
			
