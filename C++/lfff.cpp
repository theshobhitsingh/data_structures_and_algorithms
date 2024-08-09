#include<stdio.h>
int main()
{
	char c;
	int a,b;
	printf("Enter the Numbers");
	printf("\n To add press +");
	printf("\n To subtract press -");
	printf("\n To multiply press *");
	printf(" \n To divide press /");
	scanf("Enter the Choice %c",c);
	scanf("%d %d",&a,&b);
	switch(c)
	{
	
	case '+':printf("The addition of number is %d",a+b);
	break;
	case '-':printf("The sub of the number is %d",a-b);
	break;
	case'*':printf("The multiplication of the number %d",a*b);
	break;
	case'/':printf("The divide of the number %d",a/b);
	break;
}
return 0;
}
