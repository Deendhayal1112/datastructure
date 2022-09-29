#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*next;
}*head=NULL,*p,*t,*newnode;
void create()
{
	int x,n,i;
	printf("enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the values :");
		scanf("%d",&x);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			p=newnode;
		}
		else
		{
			for(p=head;p->next!=NULL;p=p->next);
			p->next=newnode;
			p=newnode;
		}
	}
}
void display()
{
	if(head==NULL)
	printf("Single linked list ins empty");
	else
	for(p=head;p!=NULL;p=p->next)
	printf("%d->",p->data);
}
int main()
{
	int ch;
	do
	{
		printf("\nMain menu :\n");
		printf("\n1.Create\n2.Display\n3.Exit\n");
		printf("Enter a choice :");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				exit(0);
			default:
				printf("Enter a valid input");
		}
	}while(ch>0 && ch<=4);
	return 0;		
}
