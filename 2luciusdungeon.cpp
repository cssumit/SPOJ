#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<map>
using namespace std;
int dijikstra(int[][],int,int);
int main()
{
	int k;
	scanf("%d",&k);
	while(k--)
	{
		int m,n;
		scanf("%d%d",&m,&n);
		int a[m+1][n+1];
		int b[(m*n)+1][(m*n)+1];
		int l,t,r;
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		scanf("%d%d%d",&l,&t,&r);
		int l=1;
		for(int i=1;i<=m;i++)
		{
			for(int j=1;j<=n;j++)
			{
				int g,h;
				for(g=1;g<=m;g++)
				{
					for(h=1;h<=n;h++)
					{
						if(g==1&&h==1)
						{
							b[(i-1)*n+j][(g-1)*n+h]=0;
						}
						else if((g-i)==0&&(h-j)==1&&j<n)
						{
							b[(i-1)*n+j][(g-1)*n+h]=a[i][j+1];
						}
						else if((g-i)==0&&(j-h)==1&&j>1)
						{
							b[(i-1)*n+j][(g-1)*n+h]=a[i][j-1];
						}
						else if((g-i)==1&&(h-j)==0&&i<m)
						{
							b[(i-1)*n+j][(g-1)*n+h]=a[i+1][j];
						}
						else if((i-g)==1&&(h-j)==0&&i>1)
						{
							b[(i-1)*n+j][(g-1)*n+h]=a[i-1][j];
						}
						else
						{
							b[(i-1)*n+j][(g-1)*n+h]=0;
						}
					}
				}
			}
			
		}
		int last=dijikstra(b,m,n,l,t);
		
/*		for(int i=1;i<=(m*n);i++)
		{
			for(int j=1;j<=(m*n);j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
*/	}
	return 0;
}
bool comp(const int& a,const int& b)
{
	return a<=b?true:false;
}
int dijikstra(int[][] b,int m,int n,int l,int t)
{
	map<int,int> heap;

	int dist[(m*n)+1];
	for(int i=1;i<=m*n;i++)
	{
		dist[i]=-1;
	}
	dist[1]=0;
	heap.insert(pair<int,int>(1,dist[1]));
	make_heap(heap.begin(),heap.end(),comp);
	int w;
	while(1)
	{
		pair<int,int>::iterator it;
		w=pop_heap(heap.begin(),heap.end(),comp);
		it=w.begin();
		if(((l-1)*n+t)==w->first)
		{
			break;
		}
		for(int i=1;i<=m*n;i++)
		{
			int d;
			if(b[w][i]>0)
			{
				d=dist[w]+b[w][i];
			}
			if(dist[i]==-1)
			{
				dist[i]=d;
				heap.push_back(dist[i]);
				push_heap(heap.begin(),heap.end(),comp);				
			}
			if(dist[i]>d)
			{
				dist[i]=d;
				
	
	
}



