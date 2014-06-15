#include<iostream>
using namespace std;
typedef struct st
{
    long long value;
	long long index;
}array;
void merge(array*,array*,long long,long long,long long);
void mergesort(array*,array*,long long,long long);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;	
		cin>>n;
		long long i;
		array ar[n];
		for(i=0;i<n;i++)
		{
			cin>>ar[i].value;
		}
		for(i=0;i<n;i++)
		{
			cin>>ar[i].index;
		}
		array br[n];
		mergesort(ar,br,0,n-1);
		long long max;
		long long mx[n];
		for(i=0;i<n;i++)
		{
			mx[i]=1;
		}
		long long j;
		for(i=0;i<n;i++)
		{
			max=1;
			for(j=0;j<i;j++)
			{
				if(ar[i].index>=ar[j].index&&max<(mx[j]+1))
				{
					max=mx[j]+1;
					mx[i]=max;
				}
			}
		}	
		max=-1;
		for(i=0;i<n;i++)
		{
			if(max<mx[i])
			{
				max=mx[i];
			}
		}
		cout<<max<<endl;
	}
	return 0;
}
void mergesort(array *a, array *b, long long low, long long high)
{
    long long pivot;
    if(low<high)
    {
        pivot=(low+high)/2;
        mergesort(a,b,low,pivot);
        mergesort(a,b,pivot+1,high);
        merge(a,b,low,pivot,high);
    }
}
void merge(array *a, array *b, long long low, long long pivot, long long high)
{
    long long h,i,j,k;
    h=low;
    i=low;
    j=pivot+1;
 
    while((h<=pivot)&&(j<=high))
    {
        if(a[h].value<a[j].value)
        {
            b[i]=a[h];
            h++;
        }
	else if(a[h].value==a[j].value)
	{
		if(a[h].index<=a[j].index)
		{
			b[i]=a[h];
			h++;
		}
		else
		{
			b[i]=a[j];
			j++;
		}
	}
        else
        {
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>pivot)
    {
        for(k=j; k<=high; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    else
    {
        for(k=h; k<=pivot; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    for(k=low; k<=high; k++) a[k]=b[k];
}			
		


