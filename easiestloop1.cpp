#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int m,n;
		scanf("%d%d",&n,&m);
		int p=(m-n)%4;
		if(p==1)
			printf("3\n");
		else if(p==2)
			printf("9\n");
		else if(p==3)
			printf("7\n");
		else 
			printf("1\n");
	}
	return 0;
}
