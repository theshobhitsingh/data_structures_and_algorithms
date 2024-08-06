#include<stdio.h>  
 int main()    
{    
int n,sum=0,m,i;    
printf("Enter a number:");    
scanf("%d",&n);    
for(i=0;i<=n;i++)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
printf("Sum is=%d",sum);    
return 0;  
} 
