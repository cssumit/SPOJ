#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	int t;
	int H;
	int P;
	int A;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&H,&P,&A);
        if(H<=P)
        {
            printf("1\n");
            continue;
        }
        double sqrt_val = ((P-2*A)*(P-2*A)) + 8*P*(H-A) ;
        double ans = sqrt(sqrt_val);
        double total = ceil(((2*A-P)+ans)/(2*P));
        printf("%.0lf\n",(2*total)-1);
	}
	return 0;
}
