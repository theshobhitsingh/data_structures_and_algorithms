#include<stdio.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	do
	{
	
	if(a<=9)
	{
		switch (a){
		
		case 1: printf("one \n");
		case 2: printf("two \n");
		case 3: printf("three \n");
		case 4: printf("four \n");
		case 5:printf("five \n");
		case 6:printf("six \n");
		case 7:printf("seven \n");
		case 8:printf("eight \n");
		case 9:printf("nine \n");
	}
	}
	if (a%2==0)
	{
		printf("even ");
	}
	if(a%2==1)
	{
		printf("odd");
	}
	if(a>9)
	{
		printf("\ngreater than 9");
	}
}while(a=i);
}
