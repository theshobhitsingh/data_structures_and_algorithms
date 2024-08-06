#include<stdio.h>
int a[3][3],b[3][3],c[3][3],i,j;
main(){
	printf("Enter the first matrix=");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++){
	scanf(" %d \t",&a[i][j]);
}
printf("\n");
}
printf("Enter the second matrix=");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++){
	scanf("%d \t",&b[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++){
	c[i][j]=a[i][j]+b[i][j];
}
printf("\n");
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++){
	printf("%d \t",c[i][j]);
}
printf("\n");
}
return 0;
}
