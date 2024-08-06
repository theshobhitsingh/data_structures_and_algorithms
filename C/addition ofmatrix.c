#include<stdio.h>
int main()
{
	int a[2][2],i,j;
	int b[2][2];
	int c[2][2];
	printf("Enter the number");
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
		scanf("%d",&b[i][j]);
	
	}
}
    for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			c[i][j]=a[i][j]*b[i][j];
			printf("%d \t",c[i][j]);
		}
	   }   
}
