#include<stdio.h>
main()
{
	int a[5],l=0,i;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	l=a[0];
	for(i=1;i<=5;i++)
	{
		if(l<a[i])
		l=a[i];
	}
	printf(" largest is %d ",l);
	return 0;
}
