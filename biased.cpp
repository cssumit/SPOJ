#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int T;
	scanf("%d",&T);
	long long n;
	vector<long long> team;
	while(T--)
	{
		printf("\n");	
		scanf("%lld",&n);
		int i=0;
		char t[200];
		long long rank;
		while(i<n)
		{
			scanf("%s",t);
			scanf("%lld",&rank);
			team.push_back(rank);
			i++;
		}
		vector<long long>::iterator it=team.begin();
		sort(team.begin(),team.end());
		int j=1;
		long long ans=0;
		while(it!=team.end())
		{
//			printf("%lld %s\n",it->first,it->second.c_str());
			ans=ans+abs(*it-j);
			++it;
			j++;
		}
		printf("%lld\n",ans);
		team.erase(team.begin(),team.end());
	}
	return 0;
}
				
