#include<stdio.h>
int main()
{
	int a,b,r;
	printf("enter the value of a=");
	scanf("%d",&a);
	b=a/30;
	printf("month ::%d\n",b);
	r=a%30;
	printf("remaining days::%d",r);
	return 0;
}
