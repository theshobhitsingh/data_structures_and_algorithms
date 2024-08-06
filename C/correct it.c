#include<stdio.h>
void calc();
void alc();
main()
{
	calc();
	calc();
	alc();
	alc();
}
void calc()
{
	int a=10,b=2,c,i;
	char choice;
	printf("Enter your choice \n");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case '+':
		c=a+b;
		printf("Addition=%d\n",c);
		break;
		case '-':
		c=a-b;
		printf("Subtraction=%d\n",c);
		break;
		case '*':
		c=a*b;
		printf("Multiplication=%d\n",c);
		break;
		case '/':
		c=a/b;
		printf("Division=%d\n",c);
		break;
	}
} 
void alc()
{
	int a=10,b=2,c,i;
	char choice;
	printf("Enter your choice \n");
	scanf("%c",&choice);
	
	switch(choice)
	{
		case '+':
		c=a+b;
		printf("Addition=%d\n",c);
		break;
		case '-':
		c=a-b;
		printf("Subtraction=%d\n",c);
		break;
		case '*':
		c=a*b;
		printf("Multiplication=%d\n",c);
		break;
		case '/':
		c=a/b;
		printf("Division=%d\n",c);
		break;
	}
}
