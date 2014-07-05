#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int* a;
	int* b;
	b=(int*)malloc(sizeof(int)*3600000001);
	a=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				if(a[k]==0)
					continue;
				if(((a[i]+a[j])*a[k])>=0)
				{	
					printf("%d",(a[i]+a[j])*a[k]);
				//	b[(a[i]+a[j])*a[k]]++;
				}
				else
					b[1800000000-((a[i]+a[j])*a[k])]++;
			}
		}
	}	
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				if((a[i]+(a[j]*a[k]))>=0)
					cnt=cnt+b[(a[i]+(a[j]*a[k]))];
				else
					cnt=cnt+b[1800000000-(a[i]+(a[j]*a[k]))];
			}
		}
	}
	printf("%d\n",cnt);
	return 0;
}
