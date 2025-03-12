#include <stdio.h>
int main()
{
	int c[100][100],b[100][100],a[100][100],i,j,r1,r2,c1,c2 ;
	printf("Enter the no. of Row");
	scanf("%d",&r1);
	printf("Enter the no of coloumn");
	scanf("%d",&c1);
	for (i=0;i<r1;i++)
	{
		for(j=0;j<c1 ;j++)
		{ 
			scanf("%d",&a[i][j]);
		}
	}
	printf("___________________________________________\n");
	r2=r1;
	c2=c1;
        for (i=0;i<r2;i++)
        {
                for(j=0;j<c2;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }
	printf("___________________________________________\n");
	for (i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c1;j++)
		{
			printf("%d \n",c[i][j]);
		}
	}
	return 0;
}
                                                                         
