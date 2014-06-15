#include<iostream>
#include<cstdio>
#include<list>
#include<vector>
using namespace std;
int main()
{
	vector<int> a;
	printf("2\n");
	for(int i=3;i<=100000000;i=i+2)
	{
		a.push_back(i);
	}
	vector<int>b;
	int j=a[0];
	
	int d=2;
	while(j*j<=100000000)
	{
		vector<int>::iterator it;
		for(it=a.begin();it!=a.end();++it)
		{
			if(*it%j==0)
			{
				a.erase(it);
			}
		}
		//b.erase(b.begin(),b.end());
		j=a.front();
		//printf("%d\n",j);
		a.erase(a.begin(),a.begin()+1);
		d++;
		if(d%100==1)
			printf("%d\n",j);
		
	}
	d++;
	printf("%d\n",a.size());
	for(int i=0;i<a.size();i++)
	{
		
		if(d%100==1)
			printf("%d\n",a[i]);
		d++;
	}
	return 0;
}
