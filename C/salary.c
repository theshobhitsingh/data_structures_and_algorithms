#include<stdio.h>
int main()
{
float salary,da,ra,bs;
printf("enter the base salary");
scanf("%f",&salary);
ra=(20*salary/100);
da=(40*salary/100);
bs=salary+da+ra;
printf("the gross salary is %f",bs);
return 0;
} 
