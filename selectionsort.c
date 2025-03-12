#include <stdio.h>
void selection (int arr[],int n)
{
	int i,j,small;

	for(i=0;i<n-1;i++)
	{
		small=i; 

		for(j=i+1;j<n;j++)
		{
			if (arr[j]< arr [ small ])
			{
				small=j;
			}
		}
		int temp= arr[small];
		arr[small]=arr[i];
		arr[i]=temp;
	}
}
void printArr( int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
int main()
{
	int a[100],i,n;
	printf("enter the number of elements in the array  --");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter your numbers  --");
		scanf("%d",&a[i]);
	}
	printf("before sorting array elements are \n");
	printArr(a,n);
	selection(a,n);
	printf("after sorting array elements are \n");
	printArr(a,n);
	return 0;
}

