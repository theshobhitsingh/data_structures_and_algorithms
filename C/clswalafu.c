#include<stdio.h>

struct create{
	int mob_n;
	char name[20],email[20];
}S1;
void cre()
{
	printf("Enter the Mobile Number Name Then Email ");
	scanf("%d %s%d",&S1.mob_n,&S1.name,&S1.email);
	printf("\n");
}

int main()
{	
	cre();
	return 0;
}


