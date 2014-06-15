#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a;
	int p=1;
	int k=3;
	for(int i=3;i<100000000;i=i+2)
	{
		a.push_back(i);
	}
	int d=0,m=1;
	while(k*k<=100000000)
	{
		if(m==k)
			break;
		m=k;
//		printf("%d\t",k);
		int j=1;
		for(int i=k;i<100000000;i++)
		{
			if(a[i]%j!=1)
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
