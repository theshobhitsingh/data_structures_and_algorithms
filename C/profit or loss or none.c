#include<stdio.h>
main(){
	int cp,sp,profit,loss;
	printf("Enter the cost price=");
	scanf("%d",&cp);
	printf("Enter the selling price=");
	scanf("%d",&sp);
	if(sp>cp)
	printf("\nProfit=",sp-cp);
	if(cp>sp)
	printf("\nLoss=",cp-sp);
	if(cp=sp)
	printf("\nNo profit & no loss");
	return 0;
}
