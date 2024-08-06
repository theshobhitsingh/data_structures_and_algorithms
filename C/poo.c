#include<stdio.h>
int main()
{
	int a,b,c;
	printf("This is the Greatest number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		printf("A is greater than B");
	}
	if(a>c)
	{
		printf("Now is A is grestest");
	}
	else 
	printf("A is the not highest");
	return 0;
}
