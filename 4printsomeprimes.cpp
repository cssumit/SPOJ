#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<bool> a;
	int p=1;
	int k=2;
	for(int i=0;i<50000000;i++)
	{
		a.push_back(0);
	}
	int d=0,m=2;
	k=3;
	while(k*k<=100000000)
	{
		if(m==k)
			break;
		m=k;
//		printf("%d\t",k);
		int j=1;
		int s=k/2;
		for(int i=s-1;i<50000000;i=i+k)
		{
			if(j!=1)
//				printf("%d",i);
				a[i]=1;
			j++;
		}
		for(int i=s;i<50000000;i++)
		{
			if(a[i]==0)
			{
				s=i+1;
				break;
			}
			
		}
		k=2*s+1;
	}
	d=1;
	printf("2\n");
	for(int i=0;i<50000000;i++)
	{
		if(a[i]==0)
		{
			d++;
//			printf("%d->>%d\n",d,2*(i+1)+1);
			if(d%100==1)
				printf("%d\n",2*(i+1)+1);		
		}
	}
	return 0;
}	
