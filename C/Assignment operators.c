#include<stdio.h>
int main()
{
	int a=100,result=a;
	result+=a;
	printf("result=%d\n",result);
	result-=a;
	printf("result=%d\n",result);
	result*=a;
	printf("result=%d\n",result);
	result/=a;
	printf("result=%d\n",result);
	result%a;
	printf("result=%d\n",result);
	return 0;
}
