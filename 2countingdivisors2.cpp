#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
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
int main()
{
	unsigned long long n;
	int t;
	unsigned long long ans;
	scanf("%d",&t);
	while(t--)
	{
		ans=0;
		scanf("%llu",&n);
		for(int i=1;i<=n;i++)
		{
			ans=ans+primefact(i);
		}
		printf("%llu\n",ans);
	}
	return 0;
}
			
