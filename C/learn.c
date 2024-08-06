#include<stdio.h>
int main()
{
	int a[100],i,n,j,key;
	printf("Enter the elements of the ");
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{ 
	printf(" \n %d",a[i]);
    }
}
