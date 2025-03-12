#include<stdio.h>
int stack[100],i,j,n,top=-1,choice=0;
void push()
{
	int val;
	if(top==n-1)
	{
		printf("overflow n");
	}
	else
	{
		printf("enter the number \n ");
		scanf("%d",&val);
		top++;
		stack[top]=val;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("underflow \n");
	}
	else
	{
		top--;
	}
}
void show()
{
	if(top==-1)
	{
		printf("stack is empty \n");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
	
}
int main()
{
	int ch;
	printf("enter the number of elements in the stack");
	scanf("%d",&n);
	do
	{
		printf("\n 1-push \n 2-pop\n 3-show \n enter your choice \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();
				break;
			case 2:pop();
				break;
			case 3:show();
				break;
			default:printf("invalid\n");
		}
		printf("enter one to CONTINUE or any other number to EXIT ");
		scanf("%d",&ch);
	}
	while(ch==1);
	if(ch!=1)
	{
		printf("exiting........");
	}
	return 0;
}
