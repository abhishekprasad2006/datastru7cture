#include <stdio.h>
#include<ctype.h>
#define max 100
int top=-1,a[max];
void push(char x)
{
	a[++top]=x;
}
char pop()
{
	if(top==-1)
	{
		return -1;
	}
	else 
	{
		return a[top--];
	}
}
int prcd(char c)
{
	if(c=='(')
	{
		return 0;
	}
	else if(c=='+'||c=='-')
	{
		return 1;
	}
	else if(c=='*'||c=='/')
	{
		return 2;
	}
}
	int ItoP(char infix[max],char postfix[max])
	{
		char temp,x;
		int i=0,j=0;
		while (infix [i]!='\0')
		{
			temp= infix[i];
			if(isalnum(temp))
			{
				postfix[j++]=temp;
			}
			else if(temp=='(' )
			{
				push(temp);
			}
			else if(temp ==')') 
			{
				while((x=pop())!='(')
				{
					postfix[j++]=x;
				}
			}
			else
			{
				while (prcd (a[top])>=prcd(temp))
				{
					postfix[j++]=pop();
				}
					push (temp);
			}		
					i++;
		}
			while (top!=-1)
			{
				postfix[j++]=pop();
				postfix[j]='\0';
			}
	}
int main()
{
	char infix[max],postfix[max];
	printf("enter the infix expression");
	fgets(infix,max,stdin);
	printf("infix expression is %s \n", infix );
	ItoP(infix,postfix);
	printf("the post fix expression is %s \n",postfix);
}
