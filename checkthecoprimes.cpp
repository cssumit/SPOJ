#include<iostream>
#include<cstdio>
int main()
{
	int t;
	unsigned long long n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%llu",&n);
		if(n%2==0)
		{
			if((n/2)%2==0)
				n=n/2-1;
			else
				n=n/2-2;
		}
		else
		{
			n=n/2;
		}
		printf("%llu\n",n);
	}
	return 0;
}
