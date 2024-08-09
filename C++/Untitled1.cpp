#include<stdio.h>     //Profit or loss
int main()
{
	int cp,sp,amount;
	printf("Enter the cost price=");
	scanf("%d",&cp);
	printf("\nEnter the selling price=");
	scanf("%d",&sp);
	if(sp>cp)
	{
	amount=sp-cp;
	printf("Profit=%d",amount);
}
	else if(cp>sp)
	{
	amount=cp-sp;
	printf("Loss=%d",amount);
}
	else
	{
	printf("No profit and No loss=");
}
   return 0;	
}
