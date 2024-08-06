#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
main()
{int a,b,ch,d;
	do {
	
	printf("Press 1 for addition");
	printf("Press 2 for subtract");
	printf("Press 3 for multiply");
	printf("Press 4 for Multuiply");
	printf("Press 5 for Exit");
	printf("Enter your Choice"); 
	scanf("%d",&ch);
	printf("Enter the values");
	scanf("%d %d",&a,&b);
	switch(ch)
	{
	case 1: add(a,b);
	break;
	case 2: sub(a,b);
	break;
	case 3: mul(a,b);
	break;
	case 4: div(a,b);
	break;
	default:
	printf("Wrong choice");
	break;
    } 
    }while(ch==5);

}
 int add(int a,int b)
{
	int z;
	z=a+b;
	return z;
}
int sub(int a,int b)
{
	int z;
	z=a-b;
	return z;
}
int mul(int a,int b)
{
	int z;
	z=a*b;
	return z;
}
int div(int a,int b)
{
	int z;
	z=a/b;
	return z;
}
