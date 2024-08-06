#include<stdio.h>
int main()
{
	float pi=3.14,r,area,circumference;
	printf("\nThe number=");
	scanf("%f,&r");
	
	area=pi*r*r;
	circumference=2*pi*r;
	printf("\nThe area of circle is=%f",area);
	printf("\nThe circumference of circle is=%f",circumference);
}
