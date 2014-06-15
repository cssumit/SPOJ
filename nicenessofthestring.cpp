#include<iostream>
#include<map>
#include<cstdio>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	map<string,int> nice;
	string str("");
	int i=0;
	while(i<=t)
	{
		getline(cin,str);
		string temp;
		stringstream st(str);
		while(st>>temp)
		{
			nice.insert(pair<string,int>(temp,0));
		}
		if(i!=0)
		{	printf("%lu\n",nice.size());
			nice.erase(nice.begin(),nice.end());
		}
		i++;
	}
	return 0;
}
