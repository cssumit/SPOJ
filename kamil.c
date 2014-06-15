#include<stdio.h>
int main()
{
	int i=10;
	int p;
	char c;
	while(i--)
	{
		p=1;
		while((c=getchar())>'@')
		{
			p*=(c=='T'|c=='D'|c=='L'|c=='F')?2:1;
		}
		printf("%d\n",p);
	}
	return 0;
}


