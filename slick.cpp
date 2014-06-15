#include<iostream>
#include<map>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{
	vector< vector< int > > slick;
	vector< int > sl;
	int m,n;
	int val;
	map<int,int> mymap;
	while(1)
	{
	scanf("%d%d",&m,&n);
	int count;
	int many;
	if(m==0&&n==0)
	{
		return 0;
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&val);
			sl.push_back(val);
			
		}
		slick.push_back(sl);
		sl.erase(sl.begin(),sl.end());
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(slick[i][j])
			{
				count=0;
				many=0;
				int p=i;
				int q=j;
				while(1)
				{
					if(p==m-1||slick[p+1][q]==0)
					{
						if(q==n-1||slick[p][q+1]==0)
						{
							break;
						}
						else
						{
							slick[p][q+1]=0;
							q++;
						}
					}
					else
					{
						slick[p+1][q]=0;
						p++;
					}
					count++;
				}
				many=mymap.find(count)->second+1;
				printf("manyj=%d",many);
			}
			mymap.insert(pair<int,int>(count,many));
			
		}
		//printf("\n");
	}
	map<int,int>::iterator it=mymap.begin();
	for(it=mymap.begin();it!=mymap.end();++it)
	{
		printf("%d %d\n",it->first,it->second);
	}
	mymap.erase(mymap.begin(),mymap.end());
	}
	return 0;
}
