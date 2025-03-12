#include <stdio.h>
int linearsearch (int *a,int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if (a[i]==key)
		{
			return 1;
		}
	}

			return -1;
}

int main()
{
	int a[100],pos,num,n,i;
	printf("enter the number of elements in the array  --");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter your numbers  --");
		scanf("%d",&a[i]);
	}
	printf("enter your element to find   --");
	scanf("%d",&num);
	i=linearsearch (&a[0],n,num);

	if(i==1)
	{
		printf("number found");
	}
	else
	{
		printf("number not found");
	}
}

