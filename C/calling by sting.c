#include<stdio.h>
void age(int a, int b);
main()
{
	int arr[7]={12,24,20,11,33,44,55};
	age(arr[0],arr[5]);
}
void age(int a,int b)
{
	printf("First number is %d ",a);
	printf("Second number is %d",b);
}
