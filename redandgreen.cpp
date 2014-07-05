#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char str[100];
	while(scanf("%s",str)!=EOF)
	{
		int red[100]={0};
		int green[100]={0};
		int ming,minr;
		int len=1;
		if(str[0]=='G')
		{
			red[0]=1;
			minr=0;
		}
		for(int i=1;str[i]!='\0';i++)
		{
			if(str[i]=='G')
			{
				red[i]=red[i-1]+1;
				if(red[i]==1)
					minr=i;
			}
			else
			{
				red[i]=red[i-1];
			}
			len++;
		}
		if(str[len-1]=='R')
		{
			green[len-1]=1;
			ming=len-1;
		}
		for(int i=len-2;i>=0;i--)
		{
			if(str[i]=='R')
			{
				green[i]=green[i+1]+1;
				if(green[i]==1)
					ming=i;
			}
			else
				green[i]=green[i+1];
		}
		for(int i=0;i<len;i++)
			red[i]=red[i]+green[i];
		ming=100;
		for(int i=0;i<len;i++)
			if(ming>red[i])
				ming=red[i];
		
/*		for(int i=0;i<len;i++)
			printf("%d",red[i]);
		printf("\n");
		for(int i=0;i<len;i++)
			printf("%d",green[i]);
		printf("\n");
*/		printf("%d\n",ming-1);
	}
	return 0;
}
