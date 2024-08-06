#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the numbers before swapping=");
scanf("%d %d",&a,&b);
a=a*b;
b=a/b;
a=a/b;
printf("The numbers after swapping=%d %d",a,b);
return 0;
}
