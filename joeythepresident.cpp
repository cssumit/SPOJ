#include<iostream>
#include<cstdio>
#include<stack>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
	vector<map<int,int> > gr;
	int n,b;
	scanf("%d%d",&n,&b);
	int x,y;
	map<int,int> ts;
	ts.insert(pair<int,int>(0,0));
	gr.push_back(ts);
	for(int i=1;i<=b;i++)
	{
		scanf("%d%d",&x,&y);
		int found=0;
		for(int i=0;i<gr.size();i++)
		{
			map<int ,int>::iterator it1,it2;
			it1=gr[i].find(x);
			it2=gr[i].find(y);
			if(it1!=gr[i].end()&&it2!=gr[i].end())
			{
				found=1;
				break;
			}
			else if(it1!=gr[i].end()&&it2==gr[i].end())
			{
				gr[i].insert(pair<int ,int>(y,0));
				found=1;
				break;
			}
			else if(it2==gr[i].end()&&it2!=gr[i].end())
			{
				gr[i].insert(pair<int ,int>(x,0));
				found=1;
				break;
			}
		}
		if(found==0)
		{
			map<int ,int> temp;
			temp.insert(pair<int,int>(x,0));
			temp.insert(pair<int,int>(y,0));
			gr.push_back(temp);
			temp.erase(temp.begin(),temp.end());
		}
	}
	int cnt=0;
	for(int i=1;i<gr.size();i++)
	{
		cnt=cnt+gr[i].size();
	}
	cnt=n-cnt;
	cnt=cnt+gr.size()-1;
	printf("%d\n",cnt);	
	return 0;
}
