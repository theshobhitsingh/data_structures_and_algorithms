#include<stdio.h>
int main()
{
int a,b,sum,sub,mul,mod;
float div;
printf("Enter the two numbers=");
scanf("%d %d",&a,&b);
sum=a+b;
sub=a-b;
mul=a*b;
mod=a%b;
div=(float)a/b;
printf("%d %d %d %d %fd",sum,sub,mul,mod,div);
return 0;
}
