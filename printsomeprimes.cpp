#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a;
	int p=1;
	int k=2;
	for(int i=0;i<50000000;i++)
	{
		a.push_back(0);
	}
	int d=0,m=1;
	while(k*k<=50000000)
	{
		if(m==k)
			break;
		m=k;
//		printf("%d\t",k);
		int j=1;
		for(int i=k-1;i<50000000;i=i+k)
		{
			if(j!=1)
//				printf("%d",i);
				a[i]=1;
			j++;
		}
		for(int i=k;i<50000000;i++)
		{
			if(a[i]==0)
			{
				k=i+1;
				break;
			}
			
		}
	}
	for(int i=1;i<50000000;i++)
	{
		if(a[i]==0)
		{
			d++;
			if(d%100==1)
				printf("%d\n",i+1);		
		}
	}
	return 0;
}	
