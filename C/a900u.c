#include <stdio.h>

int main()
{
	char a;
	int c,b;
	printf("Enter Any Operator (+,-,*,/): ");
	scanf("%c",&a);
	printf("Enter the Numbers:  ");
	scanf("%d %d",&c,&b);
	
	switch(a){
		case'+':
			printf("%d+%d=%d",c,b,c+b);
			break;
		case'-':
			printf("%d-%d=%d",c,b,c-b);
			break;
		case'*':
			printf("%d*%d=%d",c,b,c*b);
			break;
		case'/':
			printf("%d/%d=%d",c,b,c/b);
			break;
		default:
			printf("Use Scientific Calculator");
			
			
	}
	return 0;
 } 

  
