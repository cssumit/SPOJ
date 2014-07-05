#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		vector<int> a;
		vector<int> b;
		int ac;
		int bc;	
		scanf("%d%d",&ac,&bc);
		while(ac)
		{
			a.push_back(ac%10);
			ac=ac/10;
		}
		while(bc)
		{
			b.push_back(bc%10);
			bc=bc/10;
		}
		
		int carry=0;
		if(a.size()>b.size())
		{
			int j=b.size()-1;
			for(int i=a.size()-1;i>=0;i--)
			{
				if(j>=0)
					a[i]=b[j]+a[i]+carry;
				else
					a[i]=a[i]+carry;	
				carry=a[i]/10;
				a[i]=a[i]%10;
				j--;
			}
			ac=a[0];
			for(int i=1;i<a.size();i++)
			{
				ac=ac+(a[i]*pow(10,i));
			}
			if(carry==1)
			{
				ac=ac*10;
				ac=ac+carry;
			}
		}
		else 
		{
			int j=a.size()-1;
			for(int i=b.size()-1;i>=0;i--)
			{
				if(j>=0)
					b[i]=a[j]+b[i]+carry;
				else
					b[i]=b[i]+carry;
				carry=b[i]/10;
				b[i]=b[i]%10;
				j--;
			}
			ac=b[0];
			for(int i=1;i<b.size();i++)
			{
				ac=ac+(b[i]*pow(10,i));
			}
			if(carry==1)
			{
				ac=ac*10;
				ac=ac+carry;
			}
		}
		a.erase(a.begin(),a.end());
		b.erase(b.begin(),b.end());
		printf("%d\n",ac);
	}
	return 0;
}
		
		
