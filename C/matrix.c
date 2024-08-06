#include<stdio.h>
int main()
{
	int row,col,i,j;
	int a[2][2];
	printf("Enter the Number of Rows ");
	scanf("%d",&row);
	printf("Enter the Number of columns");
	scanf("%d",&col);
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d  \t ",a[i][j]);
		}
	}
	
}
