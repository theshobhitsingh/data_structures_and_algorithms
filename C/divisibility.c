#include<stdio.h>   //Checking the divisibility
main(){
int number;
printf("Enter the number=");
scanf("%d",&number);
if((number%2==0)&&(number%3==0)||(number%6==0))
printf("The number is divisible.");
else
printf("The number is not divisible.");
return 0;
}
