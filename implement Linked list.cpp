#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
}*head = NULL,*p,*t,*newnode;
void Create_SSL()
{
	int ele,i,n;
	printf("Enter the number of Elements :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("Enter the Element:");
	scanf("%d",&ele);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
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
void Display_SSL()
{
	if(head==NULL)
	printf("List is empty...");
	else
	for(p=head;p!=NULL;p=p->next)
	printf("%d->",p->data);
}
void Insert_at_begin()
{
	int ele;
	printf("Enter the Element to be inserted:");
	scanf("%d",&ele);
	printf("The Element %d has been inserted...",ele);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	p=head;
	head=newnode;
	newnode->next=p;
	p=newnode;
}
void Insert_at_end()
{
	int ele;
	printf("Enter the Element to be inserted:");
	scanf("%d",&ele);
	printf("The Element %d has been inserted...",ele);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	for(p=head;p->next!=NULL;p=p->next);
	p->next=newnode;
	p=newnode;
}
void Insert_at_any_position()
{
	int element,pos,i;
	printf("enter the element:");
	scanf("%d",& element);
	printf("enter the position");
	scanf("%d",& pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode ->data = element;
	newnode ->next = NULL;
	for(p = head,i=1;i<pos;p=p->next,i++)
	t=p;
	t->next=newnode;
	newnode->next=p;
}
void Delete_at_begin()
{
		int ele;
	printf("Enter the Element to be Deleted:");
	scanf("%d",&ele);
	printf("The Element %d has been Deleted...",ele);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	p=head;
	head=p->next;
	free(p);
	p=head;
}
void Delete_at_end()
{
	int ele;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	for(p=head;p->next!=NULL;p=p->next)
	t=p;
	t->next=NULL;
	free(p);
	p = t;
}
void Delete_at_any_position()
{

	int element,pos,i;
	printf("enter the element:");
	scanf("%d",& element);
	printf("enter the position");
	scanf("%d",& pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode ->data = element;
	newnode ->next = NULL;
	for(p=head,i=1;i<pos;p=p->next,i++)
	t=p;
	t->next=p->next;
	free(p);
	p=t;
}

int main()
{
	int choice;
	do{
		printf("\n1.Create\n2.Display\n3.Insert at begin\n4.Insert at end\n5.Insert at any position\n6.Delete at begin\n7.Delete_at_end\n8.Delete at any posiyion\n9.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:Create_SSL();
			break;
			case 2:Display_SSL();
			break;
			case 3:Insert_at_begin();
			break;
			case 4:Insert_at_end();
			break;
			case 5:Insert_at_any_position();
			break; 
			case 6:Delete_at_begin();
			break;
			case 7:Delete_at_end();
			break;
			case 8:Delete_at_any_position();
			break;
			case 9:exit(0);
			default:
			printf("...Wrong choice...\nEnter choice between 1 to 9:");
		}
	}while(choice>0&&choice<=9);
}
