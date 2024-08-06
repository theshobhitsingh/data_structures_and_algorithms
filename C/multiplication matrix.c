#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	int b[3][3];
	int c[3][3];
	printf("Enter the number");
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
		scanf("%d",&b[i][j]);
	
	}
}
    for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=a[i][j]*b[i][j];
			printf("%d \t",c[i][j]);
		}
	   }   
}
