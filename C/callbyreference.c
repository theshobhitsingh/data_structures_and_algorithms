#include<stdio.h>
void swap( int *a , int *b );
main()
{
	int a=10,b=12;
	printf("Before swapping value of a=%d and b=%d \n",a,b);
	swap(&a,&b);
	printf(" \n The after swapping a=%d and b=%d",a,b);
	
}
void swap(int *a,int *b)
{
	int c;
	c= *a;
	a= * b;
	*b =c;
	printf("%d %d",*a,*b);
}
