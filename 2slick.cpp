#include<iostream>
#include<map>
#include<cstdio>
#include<vector>
using namespace std;
vector< vector<int> > slick;
int getSlick(int ,int,int ,int);
int main()
{
	//vector< vector<int> > slick;
	vector<int> sl;
	int m,n;
	int count,val,gethow;
	map<int,int> mymap;
	while(1)
	{
		scanf("%d%d",&m,&n);
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
		int total=0;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(slick[i][j]==1)
				{
					count=getSlick(i,j,m,n);
					//printf("c==%d\n",count);
					if(mymap.find(count)->second<1000)
						gethow=1+mymap.find(count)->second;
					else
						gethow=1;
			//		printf("%d,%d",gethow,mymap.find(count)->second);
					mymap[count]=gethow;
					//slick[i][j]=0;
					total++;
				}
			}
		}
		map<int,int>::iterator it;
		printf("%d\n",total);
		for(it=mymap.begin();it!=mymap.end();++it)
		{
			printf("%d %d\n",it->first,it->second);
		}
		mymap.erase(mymap.begin(),mymap.end());
		slick.erase(slick.begin(),slick.end());
	}
	return 0;
}
int getSlick(int i,int j,int m,int n)
{
	slick[i][j]=0;
/*	for(int p=0;p<m;p++)
	{
		for(int q=0;q<n;q++)
		{
			printf("%d\t",slick[p][q]);
		}
		printf("\n");
	}
printf("\n\n");*/	int count=1;
//	printf("i=%d,j=%d\n",i,j);
	if(j<n-1&&slick[i][j+1]==1)
	{
		//slick[i+1][j]=0;
		count=count+getSlick(i,j+1,m,n);
	}
//	printf("%d,%d,slick[%d][%d]=%d\n",j,n-1,i,j+1,slick[i][j+1]);
	if(j>0&&slick[i][j-1]==1)
	{
//		printf("hello");
		//slick[i][j+1]=0;
		count=count+getSlick(i,j-1,m,n);
	}
	if(i>0&&slick[i-1][j]==1)
	{
		//slick[i-1][j]=0;
		count=count+getSlick(i-1,j,m,n);
	}
	if(i<m-1&&slick[i+1][j]==1)
	{
		//slick[i][j-1]=0;
		count=count+getSlick(i+1,j,m,n);
	}
	return count;
}
