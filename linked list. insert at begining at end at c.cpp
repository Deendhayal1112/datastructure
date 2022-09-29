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
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the values :","\n");
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
void insertatbegin()
{
	int x;
	printf("Enter the values :","\n");
		scanf("%d",&x);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=NULL;
		p=head;
		head=newnode;
		newnode->next=p;
		p=newnode;
	
}
void insertatend()
{
	int x;
	printf("Enter the values :","\n");
		scanf("%d",&x);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=x;
		newnode->next=NULL;
		for(p=head;p->next!=NULL;p=p->next);
		p->next=newnode;
		p=newnode;
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
		printf("\n1.Create\n2.Display\n3.Insert at begin\n4.Insert at end\n5.Exit\n");
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
				insertatbegin();
				break;
			case 4:
				insertatend();
				break;
			case 5:
				exit(0);
			default:
				printf("Enter a valid input");
		}
	}while(ch>0 && ch<=5);
	return 0;		
}
