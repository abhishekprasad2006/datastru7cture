#include <stdio.h.
void traverse(int a[],int len)
{
	int i;
	printf("array traversal :\n");
	for (i=-;i<len;i++)
	{
		printf("%d \n",a[i] );
	}
}
void delete (int  a[],int n ,int len,int pos)
{
	int i;
	printf("enter the element number to be deleted ");
	scanf("%d",&n);
	pos=n-1;
	for (i=pos;i<len;i++)
	{
		a[i]=a[i+1];
	}
	printf("array after deletion ");
	for (i=0;i<len-1;i++)
	{
		printf("%d \n",a[i]);
	}
}

void insert (int a[],int n,int len,int pos ,int num)
{
	int i ;
	printf("enter the element number to be inserted");
	scanf("%d"&n);
	printf("enter the number to be inserted ");
	scanf("%d",&num);
	pos=n-1;
	for (i=len;i>pos;i--)
	{
		a[i]=a[i-1];
	} 
	a[pos]=num;
	printf("array after insertion");
	for(i=0;i<=len;i++)
	{
		printf("%d \n"a[i]);
	}
}
void merge (int a[],int b[],int c[],int len,int ben);
{
	int i;
	printf("enter the no. of elements of secomd array");
	scanf("%d",&ben);
	printf("enter the array elements \n");
	for (i=0;i<ben;i++)
	{
		scanf("%d",&b[i]);
	}
	for (i=0;i<len;i++)
	{
		([i]=a[i];


	}
