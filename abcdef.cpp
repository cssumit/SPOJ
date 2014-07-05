#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	vector<int> vec;
	for(int i=0;i<n;i++)
	{
		int p;
		scanf("%d",&p);
		vec.push_back(p);
	}
	sort(vec.begin(),vec.end());
	map<int,int> map1;
	map<int,int> map2;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			for(int k=0;k<n;k++)
			{
				if(vec[k]==0)
					continue;
				map<int,int>::iterator it=map1.find((vec[i]+vec[j])*vec[k]);
				if(it!=map1.end())
				{
					int cnt=it->second+1;
					it->second=cnt;
				}
				else
				{
					map1.insert(pair<int,int>((vec[i]+vec[j])*vec[k],1));
				}
			}
	//for(map<int,int>::iterator it=map1.begin();it!=map1.end();++it)
	//	printf("%d %d\n",it->first,it->second);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			for(int k=0;k<n;k++)
			{
				map<int,int>::iterator it=map2.find(vec[i]+(vec[j]*vec[k]));
				if(it!=map2.end())
				{
					int cnt=it->second+1;
					it->second=cnt;
				}
				else
				{
					map2.insert(pair<int,int>(vec[i]+(vec[j]*vec[k]),1));
				}
			}
	//for(map<int,int>::iterator it=map2.begin();it!=map2.end();++it)
	//	printf("%d %d\n",it->first,it->second);
	map<int,int>::iterator it1=map1.begin();
	map<int,int>::iterator it2=map2.begin();
	int count=0;
	while(it1!=map1.end()&&it2!=map2.end())
	{
		//printf("%d----%d\n",it1->first,it2->first);
		if(it1->first==it2->first)
		{
			count=(it1->second*it2->second)+count;
			++it1;
			++it2;
		}
		else if(it1->first>it2->first)
		{
			//printf("%d",it2->first);
			++it2;
		}
		else if(it1->first<it2->first)
		{
			++it1;
		}
		//printf("%d\n",count);
	}
	printf("%d\n",count);
	return 0;
}
