#include<stdio.h>
int main(){
int a=0001000,b=2,result;
result=a<<b;
printf("a<<b=%d\n",result);
result=a>>b;
printf("a>>b=%d\n",result);
result=a^b;
printf("a^b\n",result);
result=~b;
printf("~b",result);
return 0;
}

