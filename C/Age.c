/**         //Documentation
*file:age.c
*author:Shobhit
*description:program to find our age.
*/
#include<stdio.h>  //Link
#define BORN 2001  //Definition
int age(int current);  // Global Declaration
int main()     //Main()Function
{
	int current=2022;
	printf("age:%d",age(current));
	return 0;
 }
 int age(int current){   //Subprograms
 return current-BORN;
 } 
