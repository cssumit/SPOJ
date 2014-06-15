#include<iostream>
#include<vector>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	int T;
	scanf("%d",&T);
	long long s,n,i;
	long long ans,count,mn;
	vector<long long> prim;
	//vector<long long> wprim;
	while(T--)
	{
		ans=0;
		mn=1;
		scanf("%lld",&n);
		if(n==1)
		{
			printf("0\n");
		}
		else
		{
		i=2;
		s=n;
		count=0;
		//wprim.push_back(2);
		while(n%2==0)
		{
			n=n/2;
			prim.push_back(2);
		}
//		cout<<n;
		for(i=3;i<=sqrt(n);i=i+2)
		{
			count=0;
			while(n%i==0)
			{
				n=n/i;
				prim.push_back(i);
			}
			
		}
		if(n>2)
		{
			prim.push_back(n);
		}
		int j;
//		cout<<ans;
		count=1;
		for(j=1;j<prim.size();j++)
		{
			if(prim[j]!=prim[j-1])
			{
				int k=0;
				while(k<=count)
				{
					ans=ans+pow(prim[j-1],k);
					k++;
				}
				mn=mn*ans;
				ans=0;
				count=1;
				continue;
			}
			count++;
		}		
		//cout<<mn<<"and"<<count<<endl;
		ans=0;
		int k=0;
		while(k<=count)
		{
			ans=ans+pow(prim[j-1],k);
			k++;
		}
		mn=mn*ans;
		mn=mn-s;
		prim.erase(prim.begin(),prim.end());
		printf("%lld\n",mn);
		}//wprim.erase(wprim.begin(),wprim.end());//cout<<ans<<endl;
	}
	return 0;	
}

