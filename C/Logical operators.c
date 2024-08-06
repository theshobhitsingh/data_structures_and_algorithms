#include<stdio.h>
int main()
{
	int a=1,b=0,result;
	result=(a&&b);      //AND
	printf("a&&b=%d\n",result);
	result=(a||b);      //OR
	printf("a||b=%d\n",result);
	result=!a;          //NOT
	printf("!a=%d\n",result);
	result=!b;
	printf("!b=%d\n",result);
	return 0;
}
