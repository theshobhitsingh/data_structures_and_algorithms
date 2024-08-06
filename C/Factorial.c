#include<stdio.h>   //Factorial of any number
main(){
	int i,fac=1,num;
	printf("Enter the number=");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
	fac=fac*i;
}
printf("The factorial of the number %d is %d",num,fac);
return 0;
}
