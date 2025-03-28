#include<stdio.h>
#include<stdlib.h>
int queue[5];
int front=-1,rear=-1;
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%i\n",queue[i]);
	}
}
void main()
{
	int choice,info;
	do
	{
		printf("Menu\n1.Insert an element\n2.Delete an element\n3.Display the queue\nExit\nYour choice : ");
		scanf("%i",&choice);
		switch(choice)
		{
			case 1:if(rear==4)
				{
					printf("queue is full\n");\
				}
				else
				{
					printf("enter the element:");
					scanf("%d",&info);
					rear=rear+1;
					queue[rear]=info;
					front=0;
				}
				break;
			case 2:
				printf("no deleted is %d",queue[front]);
				front=front+1;
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:printf("wrong choice\n");
		}
	}while(choice<=4);
}
