#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	long long info;
	struct st* next;
}node;
node* insert(node*,long long);
node* delete(node*,long long);
//void display(node* head);
int main()
{
	node* head;
	int t;
	long long n;
	long long i;
	scanf("%d",&t);
	while(t--)
	{
		head=NULL;
		scanf("%lld",&n);
		for(i=1;i<=n;i++)
		{
			head=insert(head,i);
		}
		//display(head);
/*		for(i=1;i<=n-1;i++)
		{
			head=delete(head,i);
//			printf("\n");
//			display(head);
		}
		printf("%lld\n",head->info);
*/	}
	return 0;
}
node* insert(node* head,long long i)
{
	node* ptr;
	ptr=head;
	if(ptr==NULL)
	{
		ptr=(node*)malloc(sizeof(node));
		ptr->info=i;
		ptr->next=ptr;
		return ptr;
	}
	while(ptr->next!=head)
	{
		ptr=ptr->next;
	}
	node* ne;
	ne=(node*)malloc(sizeof(node));
	ne->info=i;
	ne->next=head;
	ptr->next=ne;
	return head;
}
/*void display(node* head)
{
	node* ptr=head;
	printf("%lld->",ptr->info);
	ptr=ptr->next;
	while(ptr!=head)
	{
		printf("%lld->",ptr->info);
		ptr=ptr->next;
		
	}
}*/
node* delete(node* head,long long i)
{
	node* ptr;
	ptr=head->next;
	if(i==1)
	{
		while(ptr->next!=head)
		{	
			ptr=ptr->next;
		}
		ptr->next=head->next;
		head=ptr->next;
	}
	else
	{
		i=i-2;
		ptr=head;
		while(i>0)
		{
			ptr=ptr->next;
			i--;
		}
		ptr->next=ptr->next->next;
		head=ptr->next;
	}
	return head;
}
	
	

		
	




