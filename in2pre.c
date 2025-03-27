#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#define MAX 100

int top=-1;
char s[MAX];

int isFull()
{
	return top==MAX-1;
}

int isEmpty()
{
	return top==-1;
}

void push(char item)
{
	if(isFull())
	{
		return;
	}
	top++;
	s[top]=item;
}

int pop()
{
	if(isEmpty())
	{
		return INT_MIN;
	}
	return s[top--];
}

int peek()
{
	if(isEmpty())
	{
		return INT_MIN;
	}
	return s[top];
}
int checkIfOperand(char ch)
{
	return(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z');
}

int precedence(char ch)
{
	switch(ch)
	{
		case'+':
		case'-':
			return 1;
		case'*':
		case'/':
			return 2;
		case'^':
			return 3;
	}
	return -1;
}

int getPostfix(char *expression)
{
	int i,j;
	for(i=0,j=-1;expression[i];++i)
	{
		if(checkIfOperand(expression[i]))
		{
			expression[++j]=expression[i];
		}
		else if(expression[i]=='(')
		{
			push(expression[i]);
		}
		else if(expression[i]==')')
		{
			while(!isEmpty(s)&&peek(s)!='(')
			{
				expression[++j]=pop(s);
			}
			if(!isEmpty(s)&&peek(s)!='(')
			{
				return -1;
			}
			else
			{
				pop(s);
			}
		}
		else
		{
			while(!isEmpty(s)&&precedence(expression[i])<=precedence(peek(s)))
			{
				expression[++j]=pop(s);
			}
			push(expression[i]);
		}
	}
	while(!isEmpty(s))
	{
		expression[++j]=pop(s);
	}
	expression[++j]='\0';
}

void reverse(char *exp)
{
	int size=strlen(exp);
	int j=size,i=0;
	char temp[size];
	temp[j--]='\0';
	while(exp[i]!='\0')
	{
		temp[j]=exp[i];
		j--;
		i++;
	}
	strcpy(exp,temp);
}

void brackets(char *exp)
{
	int i=0;
	while(exp[i]!='\0')
	{
		if(exp[i]=='(')
		{
			exp[i]=')';
		}
		else if(exp[i]==')')
		{
			exp[i]='(';
		}
		i++;
	}
}

void in2pre(char *exp)
{
	int size=strlen(exp);
	reverse(exp);
	brackets(exp);
	getPostfix(exp);
	reverse(exp);
}

int main()
{
	char expression[100];
	printf("\ninfix exp: ");
	scanf("%s",expression);
	printf("\n%s\n",expression);
	in2pre(expression);
	printf("\nThe prefix is: ");
	printf("\n%s\n",expression);
	return 0;
}
