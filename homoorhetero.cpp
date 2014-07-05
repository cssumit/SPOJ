#include<iostream>
#include<cstdio>
#include<map>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	map<long long,int> maps;
	while(t--)
	{
		char str[10];
		long long p;
		scanf("%s%lld",str,&p);
		bool homo=0,hetero=0;
		if(str[0]=='i')
		{
			map<long long,int>::iterator it=maps.find(p);
			if(it!=maps.end())
			{
				it->second=it->second+1;
				homo=1;
			}
			else
			{
				maps.insert(pair<long long,int>(p,1));
			}
		}
		else if(str[0]=='d')
		{
			map<long long,int>::iterator it=maps.find(p);
			if(it!=maps.end())
			{
				if(it->second==1)
					maps.erase(it);
				else if(it->second==2)
					it->second=it->second-1;
				else
				{
					homo=1;
					it->second=it->second-1;
				}
			}
		}
		if(maps.size()>1)
			hetero=1;
		if(homo&hetero)
			printf("both\n");
		else if(!homo&!hetero)
			printf("neither\n");
		else if(!homo&hetero)
			printf("hetero\n");
		else if(homo&!hetero)
			printf("homo\n");
	}
	return 0;
}

		
