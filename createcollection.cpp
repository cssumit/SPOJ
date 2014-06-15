#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> num;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);	
		int j;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&j);	
			num.push_back(j);
		}
		sort(num.begin(),num.end());	
		int cnt=0;
		for(int i=num.size()-1;i>=0;i--)
		{
			if(num[i]%2==0)
			{
				vector<int>::iterator it;
				it=find(num.begin(),num.end(),num[i]/2);
				auto int pos=it-num.begin();
				if(pos<num.size())
				{
					num[i]=-1;
					num[pos]=-1;
					cnt++;
				}
			}
		}
		printf("%d\n",cnt);
		num.erase(num.begin(),num.end());
	}
	return 0;
}
