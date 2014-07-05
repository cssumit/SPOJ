#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	int j=1;
	scanf("%d",&t);
	while(j<=t)
	{
		int n;
		scanf("%d",&n);
		vector<int> s;	
		int p;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&p);
			s.push_back(p);
		}
		sort(s.begin(),s.end());
		int max=1;
		int temp=1;
		int min=1;
		for(int i=1;i<n;i++)
		{
			if(s[i]!=s[i-1])
			{
				if(max<temp)
				{
					max=temp;
				}
				temp=1;
				min++;
			}
			else
			{
				temp++;
			}
		}
		printf("Case #%d: %d %d\n",j,max,min);
		j++;
		s.erase(s.begin(),s.end());					
		
	}
	return 0;
}
