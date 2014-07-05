#include<iostream>
#include<stack>
#include<cstdio>
#define gc getchar_unlocked()
using namespace std;
typedef struct st
{
	int x;
	int y;
}cord;
int main()
{	
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char maze[20][20];
		int m,n;
		scanf("%d%d",&m,&n);
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				maze[i][j]=gc;
			}
			gc;
		}
		int cnt=0;
		int in1=0,in2=0,ot1=0,ot2=0;
		for(int i=0;i<m;i++)
		{
			if(i==0||i==m-1)
			{
				for(int j=0;j<n;j++)
				{
					if(maze[i][j]=='.')
					{
						cnt++;
						if(cnt==1)
						{
							in1=i+1;
							in2=j+1;
						}
						else if(cnt==2)
						{
							ot1=i+1;
							ot2=j+1;
						}
					}
				}
			}
			else
			{
				if(maze[i][0]=='.')
				{
					cnt++;
					if(cnt==1)
					{
						in1=i+1;
						in2=1;
					}
					else if(cnt==2)	
					{
						ot1=i+1;
						ot2=1;
					}
				}
				else if(maze[i][n-1]=='.')
				{
					cnt++;
					if(cnt==1)
					{
						in1=i+1;
						in2=n;
					}
					else if(cnt==2)
					{
						ot1=i+1;
						ot2=n;
					}
				}
			}
		}
		if(cnt!=2)
		{
			printf("invalid\n");
		}
		else
		{
			stack<cord> stk;
			cord cr;
			cr.x=in1;
			cr.y=in2;
			int cnt2=0;
			stk.push(cr);
			maze[in1-1][in2-1]='#';
			int i=in1;
			while(1)
			{
				cord tp=stk.top();
				stk.pop();
				if(tp.x==ot1&&tp.y==ot2)
				{
					cnt2++;
				}
				if(tp.x-1>0&&maze[tp.x-2][tp.y-1]=='.')
				{	
					cr.x=tp.x-1;
					cr.y=tp.y;
					maze[tp.x-2][tp.y-1]='#';
					stk.push(cr);
				}
				if(tp.x+1<=m&&maze[tp.x][tp.y-1]=='.')
				{	
					cr.x=tp.x+1;
					cr.y=tp.y;
					maze[tp.x][tp.y-1]='#';
					stk.push(cr);
				}
				if(tp.y-1>0&&maze[tp.x-1][tp.y-2]=='.')
				{	
					cr.x=tp.x;
					cr.y=tp.y-1;
					maze[tp.x-1][tp.y-2]='#';
					stk.push(cr);
				}
				if(tp.y+1<=n&&maze[tp.x-1][tp.y]=='.')
				{	
					cr.x=tp.x;
					cr.y=tp.y+1;
					maze[tp.x-1][tp.y]='#';
					stk.push(cr);
				}
				if(stk.empty())
				{
					break;
				}
			} 		
			if(cnt2>0)
			{
				printf("valid\n");
			}
			else
			{	
				printf("invalid\n");
			}
		}	
	}
	return 0;
}
	
