#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<map>
#include<cstring>
using namespace std;
typedef struct st
{
	char sign;
	int val;
}table;
table mat[51][51];
vector<string> lcs(char*,char*);
int main()
{
	char one[50],two[50],three[50],four[50];
	scanf("%s%s%s%s",one,two,three,four);
	vector< vector<string> > all;
	all.push_back(lcs(one,two));
	all.push_back(lcs(one,three));
	all.push_back(lcs(one,four));
	all.push_back(lcs(two,three));
	all.push_back(lcs(two,four));
	all.push_back(lcs(three,four));
	map<string,int> maps;
	for(int i=0;i<all.size();i++)
	{
		for(int j=0;j<all[i].size();j++)
		{
			maps.insert(pair<string,int>(all[i][j],0));
		}
	}
	int cnt=0;
	for(int i=0;i<all.size();i++)
	{
		cnt=cnt+all[i].size();
	}
	cnt=cnt-maps.size();
	printf("%d\n",cnt);
	return 0;
}
vector<string> lcs(char* a,char* b)
{
	for(int i=0;i<strlen(a)+1;i++)
	{	
		mat[i][0].sign='#';
		mat[i][0].val=0;
	}
	for(int j=0;j<strlen(b)+1;j++)
	{
		mat[0][j].sign='#';
		mat[0][j].val=0;
	}
	for(int i=0;i<strlen(a);i++)
	{
		for(int j=0;j<strlen(b);b++)
		{
			if(a[i]==b[j])
			{
				mat[i+1][j+1].sign='/';
				mat[i+1][j+1].val=mat[i][j].val+1;
			}
			else
			{
				if(mat[i][j+1].val>mat[i+1][j].val)
				{
					mat[i+1][j+1].sign='|';
					mat[i+1][j+1].val=mat[i][j+1].val;
				}
				else
				{
					mat[i+1][j+1].sign='-';
					mat[i+1][j+1].val=mat[i+1][j].val;
				}
			}
		}
	}
	for(int i=0;i<strlen(a)+1;i++)
	{
		for(int j=0;j<strlen(b)+1;j++)
		{
			printf("[%d , %c ]\t",mat[i][j].val,mat[i][j].val);
		}
		printf("\n");
	}
	vector<string> st;
	st.push_back("all");
	return st;
}
