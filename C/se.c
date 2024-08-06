#include<stdio.h>
struct emp{
	int id,salary;
	char name[20];
}E[5];
int main()
{
	int i;
	printf("Enter the Details");
	for(i=0;i<=4;i++)
	{
		printf("Id Salary Name");
		scanf("%d %d %s",&E[i].id,&E[i].salary,&E[i].name);
	}
	for(i=0;i<=4;i++)
	{
		if((E[i].salary)>30000)
		printf("Employeee %s",E[i].name);
	}
}
