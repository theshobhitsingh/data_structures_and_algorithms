#include<stdio.h>   //Fibonacci Series
main(){
	int i,num,a=-1,b=1,c;
	printf("Enter the number of elements: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
		return 0;
	}
