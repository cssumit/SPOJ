#include<iostream>
#include<cstdio>
using namespace std;
int max(int,int);
int knapsack(int,int*,int*,int);
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int wt,itm;
		scanf("%d%d",&wt,&itm);
		int wts[itm];
		int val[itm];
		for(int i=0;i<itm;i++)
		{
			scanf("%d%d",&wts[i],&val[i]);
		}
		int ans=knapsack(wt,wts,val,itm);
		printf("Hey stupid robber, you can get %d.\n",ans);
	}
	return 0;
}
 
int max(int a, int b) 
{ 
	return (a > b)? a : b; 
}
 
int knapsack(int wt, int* wts, int* val, int itm)
{
	int K[itm+1][wt+1];
	for (int i = 0; i <= itm; i++)
   	{
       		for (int w = 0; w <= wt; w++)
       		{
           		if (i==0 || w==0)
               		{
				K[i][w] = 0;
			}
			else if (wts[i-1] <= w)
			{
				K[i][w] = max(val[i-1] + K[i-1][w-wts[i-1]],  K[i-1][w]);
           		}
			else
                 	{
				K[i][w] = K[i-1][w];
       			}
   		}
	}
 	return K[itm][wt];	
}
