#include<stdio.h>
int main()
{
	int row,col,i,j;
	int a[3][3];
	int b[3][3];
	printf("Enter the Number of Rows ");
	scanf("%d",&row);
	printf("Enter the Number of columns");
	scanf("%d",&col);
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d  \t ",a[i][j]);
		}
		printf("\n");
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
		for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d \t ",b[i][j]);
		}
	}

	
	
}
}
