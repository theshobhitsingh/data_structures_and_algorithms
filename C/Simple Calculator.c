#include<stdio.h>       //Simple Calculator using Switch
main(){
	int a,b,result;
	char ch;
	printf("Enter the operator=");
	scanf("%c",&ch);
	printf("Enter the operands=");
	scanf("%d %d",&a,&b);
	switch(ch)
	{
	case'+':
	result=a+b;
	printf("%d",result);
	break;
	case'-':
	result=a-b;
	printf("%d",result);
	break;
	case'*':
	result=a*b;
	printf("%d",result);
	break;
	case'/':
	result=a/b;
	printf("%d",result);
	break;
	case'%':
    result=a/b;
	printf("%d",result);
    break;
	default:
	printf("Wrong Choice");
	break;
}
	return 0;
}
