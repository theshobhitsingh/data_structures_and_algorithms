#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int main()
{
	
	int a,b,ch;
	printf("press 1 for add,2 for sub,3 for mul,4 for div\n");
	do
	
{

		printf("enter the value of a and b");
	scanf("%d %d",&a,&b);
	printf("enter the vaule of your choice");
	scanf("%d",&ch);
	
	
	switch(ch)
	{
	case 1:add(a,b);break;
	case 2:sub(a,b);break;
	case 3:mul(a,b);break;
	case 4:div(a,b);break;
	default:printf("wrong choice");break;
	}
	
	
	}
	while(ch!=5);
	
}
int add(int a,int b)
{
printf( " %d \n",a+b);
}
int sub(int a,int b)
{

printf(" %d \n",a-b);
}
int mul(int a,int b)
{printf(" %d \n",a*b);
}
int div(int a,int b)
{
printf(" %d \n",a/b);
}
