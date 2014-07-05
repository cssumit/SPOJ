#include<iostream>
#include<cstdio>
int main()
{
	int ar[1000000]={0};
	for(int i=0;i<1000000;i++)
	{
		int j=i+1;
		int k=j;
		while(j!=0)
		{
			k=k+(j%10);
			j=j/10;
		}
		if(k<1000000)
			ar[k-1]=1;
	}
	for(int i=0;i<999999;i++)
	{
		if(!ar[i])
			printf("%d\n",i+1);
	}
	return 0;
}	
		
