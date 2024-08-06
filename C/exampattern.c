#include <stdio.h>     //Pyramid
 int main(){
 	int i,j,rows;
 	printf("Enter the number of rows=");
 	scanf("%d",&rows);
 	for(i=1;i<=rows;i++){
	 for(j=1;j<=i;j++){
	 	printf("%d ",j*j);
	 }
	 printf("\n");
 }
 return 0;
}
