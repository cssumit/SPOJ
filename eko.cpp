#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	long long m,n;
	scanf("%lld%lld",&n,&m);
	vector<long long> vec;
	for(long long i=0;i<n;i++)
	{
		long long p;
		scanf("%lld",&p);
		vec.push_back(p);
	}
	long long sum=0;
	for(long long i=0;i<vec.size();i++)
		sum=sum+vec[i];
	sum=sum-m;
	long long val=(long long)ceil(sum/vec.size());
	sum=0;
	long long cnt=0;
	for(long long i=0;i<vec.size();i++)
	{	if(vec[i]>=val)
		{
			sum=sum+vec[i];
			cnt++;
		}
	}
//	printf("%lld  %lld",(sum-m),cnt);
	double vald=((double)(sum-m))/(double)cnt;
	val=(sum-m)/cnt;
	double che=double(vald)-val;
	if(che>=0.5)
	{
		val=val+1;
	}
	printf("%lld\n",val);
	return 0;
}
	
