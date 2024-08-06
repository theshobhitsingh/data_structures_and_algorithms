#include<stdio.h>
main()
{
	int num,rev=0,d;
	printf("Enter the number=");
	scanf("%d",&num);
	while(num)
	{
		d=num%10;
		rev=rev+d;
		num=num/10;
		printf("the number after reversing %d",rev);
	}
	return 0;
}
