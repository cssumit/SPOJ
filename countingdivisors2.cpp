#include<iostream>
#include<cstdio>
#include<cmath>
unsigned long long a[10000];
unsigned long long primefact(unsigned long long n)
{
	unsigned long long val=0;
	unsigned long long sum=1;
	while (n%2 == 0)
    	{
        	n = n/2;
		val++;
    	}
 	sum=sum*(2*val+1);
    	for (int i = 3; i <= sqrt(n); i = i+2)
    	{
        	val=0;
        	while (n%i == 0)
        	{
            		n = n/i;
			val++;
	   	}
		sum=sum*(2*val+1);	 
        }
 	if (n > 2)
        	sum=sum*3;
	return sum;
}
unsigned long long countl(unsigned long long n)
{
	unsigned long long count=0;
	if(n==1)
	{
		a[0]=1;
		return 1;
	}
	else if(n<=10000000)
	{
		if(a[n-1]!=0)
		{
			return a[n-1];
		}
		else
		{
			count=primefact(n);
			a[n-1]=count+countl(n-1);
			return a[n-1];
		}
	}
	else
	{
		count=primefact(n);
		count=countl(n-1)+count;
		return count;
	}
}

int main()
{
	unsigned long long n;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%llu",&n);
		printf("%llu\n",countl(n));
	}
	return 0;
}
			
