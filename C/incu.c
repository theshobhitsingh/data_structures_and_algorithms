#include<stdio.h>
int main()
{
	int BS=20000,HRA,TA,DA,Gross;
	printf("Total salary of me    ");
	HRA=(10*BS/100);
	TA=(20*BS/100);
	DA=(30*BS/100);
	Gross=BS+TA+DA+HRA;
	printf("Total Salary of me %d ",Gross);
	return 0;
}
