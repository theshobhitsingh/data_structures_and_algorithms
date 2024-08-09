#include<stdio.h>     //Nested loop print *

main(){
	int c;
	printf("Enter the character=");
	scanf("%c",&c);
	int i,j;
	for(i=10;i>=1;i--){
	for(j=1;j<=i;j++){
	printf("*");	
	}
	printf("\n");
	}
	return 0;
}
