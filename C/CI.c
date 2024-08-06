#include<stdio.h>    //Compound Interest
#include<math.h>
main(){
	float p,r,n,ci,amount;
	printf("Enter the Principal,Rate,Time=");
	scanf("%f %f %f",&p,&r,&n);
	ci=p*(pow((1+r/100),n));
	printf("The Compound Interest Is %f=",ci);
	amount=p+ci;
	printf("\nThe amount is %f=",amount);
	return 0;
}
