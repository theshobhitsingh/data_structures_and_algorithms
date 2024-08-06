#include<stdio.h>
int main()
{
int ts,h,m,s;
printf("enter the total seconds=");
scanf("%d",&ts);
h=ts/3600;
ts=ts%3600;
m=ts/60;
s=ts%60;
printf("hour=%d min=%d,sec=%d",h,m,s);
return 0;
}
