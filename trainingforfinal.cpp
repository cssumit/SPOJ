#include<iostream>
#include<cstdio>
int main()
{
	int x,y,n,m;
	scanf("%d%d",&n,&m);
	scanf("%d%d",&x,&y);
	int P[n+1][m+1];
	int val;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			scanf("%d",&val);
			if(i>x+1&&j==y)
			{
				P[i][j]=val+P[i-1][j];
			}
			else if(i==x&&j>y+1)
			{
				P[i][j]=val+P[i][j-1];
			}
			else if(i>x&&j>y)
			{
				P[i][j]=P[i][j-1]<P[i-1][j]?P[i][j-1]+val:P[i-1][j]+val;
			}
			else
			{
				P[i][j]=val;
			}
		}
	}
/*	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			printf("%d\t",P[i][j]);
		}
		printf("\n");
	}
*/	int ans=P[x][y]-P[n][m];
//	printf("%d",P[x][y]);
	if(ans>=0)
	{
		printf("Y %d\n",ans);
	}
	else
	{
		printf("N\n");
	}
	return 0;
}
