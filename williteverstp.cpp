#include<iostream>
#include<cstdio>
int main()
{
	unsigned long long n;
	scanf("%llu",&n);
	int flag=0;
	while(n>1)
	{
		if(n%2==0)
			n=n/2;
		else
		{	flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("TAK\n");
	}
	else
	{
		printf("NIE\n");
	}
	return 0;
}	
