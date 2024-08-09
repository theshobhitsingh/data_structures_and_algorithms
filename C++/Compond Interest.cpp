#include<stdio.h>
#include<math.h>
main(){
	int p,r,n,ci,amount;
	printf("Enter the Principal,Rate,Time=");
	scanf("%d %d %d",&p,&r,&n);
	ci=p*(pow((1+r/100),n));
	printf("The Compound Interest Is %d=",ci);
	amount=p+ci;
	printf("The amount is=",amount);
	return 0;
}
