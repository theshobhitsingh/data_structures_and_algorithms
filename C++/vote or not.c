#include<stdio.h>
main(){
	int years;
	printf("Enter the age of person=");
	scanf("%d",&years);
	if(years>=18)
	printf("The person is eligible to vote.");
	else
	printf("The person is not eligible to vote.");
	return 0;
}
