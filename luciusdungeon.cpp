#include<iostream>
#include<cstdio>
using namespace std;
typedef struct st
{
	int s;
	int t;
	int x[5];
	int y[5];
	int edge[5];
}index;
int dijikstra(index*,int,int);
int main()
{
	int k;
	scanf("%d",&k);
	while(k--)
	{
		int m,n;
		scanf("%d%d",&m,&n);
		int a[m+1][n+1];
		G
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		int l=1;
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				index ind;
				int p=1;
				ind.x[p]=(j+1>n)?0:i;
				ind.y[p]=(j+1>n)?0:j+1;
				ind.edge[p]=(ind.x[p]==0&&ind.y[p]==0)?0:a[i][j+1];
				p++;
				ind.x[p]=(j-1<1)||((j==2)&&(i==1))?0:i;
				ind.y[p]=(j-1<1)||((j==2)&&(i==1))?0:j-1;
				ind.edge[p]=(ind.x[p]==0&&ind.y[p]==0)?0:a[i][j-1];
				p++;
				ind.x[p]=(i+1>m)?0:i+1;
				ind.y[p]=(i+1>m)?0:j;
				ind.edge[p]=(ind.x[p]==0&&ind.y[p]==0)?0:a[i+1][j];
				p++;
				ind.x[p]=(i-1>1)||((i==2)&&(j==1))?0:i-1;
				ind.y[p]=(i-1<1)||((i==2)&&(j==1))?0:j;
				ind.edge[p]=(ind.x[p]==0&&ind.y[p]==0)?0:a[i-1][j];
				ind.s=i;
				ind.t=j;
				b[l]=ind;
				p++;
				l++;
			}
			
		}
		int last=dijikstra(b,m,n);
		
/*		for(int i=1;i<=(m*n);i++)
		{
			for(int j=1;j<=4;j++)
			{
				printf("(%d,%d)\t",b[i][j].x,b[i][j].y);
			}
			printf("\n");
		}*/
	}
	return 0;
}
bool comp(const int& a,const int& b)
{
	return a<=b?true:false;
}
int dijikstra(index* b,int m,int n)
{
	vector<index> heap;
	heap.push_back(0);
	make_heap(heap.begin(),heap.end(),comp);
	
	
	
}



