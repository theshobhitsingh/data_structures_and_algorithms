#include<stdio.h>
int main()
{
	int a[100],i,n,j,key;
	printf("Enter the elements of the ");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key )
		{
		a[j+1]=a[j];
		j=j-1;
	}a[j+1]=key;
	}
	
	for(i=1;i<=n;i++){
		printf(" \n %d",a[i]);
}
}
