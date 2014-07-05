#include<iostream>
#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		vector<long long> a;
		for(int i=0;i<n;i++)
		{
			long long s;
			scanf("%lld",&s);
			a.push_back(s);
		}
		long long p;
		scanf("%lld",&p);
		sort(a.begin(),a.end());
		int i=0,j=n-1;
		int flag=0;
		while(i!=j)
		{
			if(a[i]+a[j]>=p)
				j--;
			else
			{
				if (binary_search(a.begin()+(i+1),a.end()-(n-(j)),(p-(a[j]+a[i]))))
				{
					flag=1;
					break;
				}
				else
				{
					i++;
				}
			}
		}
		if(flag==1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		a.erase(a.begin(),a.end());
	}
	return 0;
}
