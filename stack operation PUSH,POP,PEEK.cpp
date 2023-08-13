#include<stdio.h>
#include<stdlib.h>
#define size 5
int stk[10],top=-1;
void push()
{
	int ele;
	printf("enter  the element:");
	scanf("%d",&ele);
	if(top==size-1)
	printf("the stack is full");
	else
	{
		top=top+1;
		stk[top]=ele;
	}
}
void pop()
{
	int ele;
	if(top==-1)
	printf("stack is empty");
	else
	{
		ele=stk[top];
		top=top-1;
	}
	printf("the deleted element =%d",ele);
}
void peek()
{
	if(top==-1)
	printf("the stack is empty");
	else
	printf("%d",stk[top]);
}
void display()
{
	int i;
	if (top==-1)
	printf("the stack is empty");
	else
	for(i=top;i>=0;i--)
	printf("%d",stk[i]);
}
int main()
{
	int cho;
	do
	{
		printf("\n1.push\n2.pop\n3.peek\n4.display\n5.exit");
		printf("enter the choice: ");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:peek();
			break;
			case 4:display();
			break;
			case 5:exit(0);
			default:
			printf("enter the choice between 1to 5\n");
		}
	}
	while (cho>0&&cho<=5);
}
