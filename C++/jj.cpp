#include<stdio.h>      //Calculating the salary
main(){
	char g;
	int yos,qual,sal;
	printf("Enter the Gender,Years of Service and Qualifications(0=G,1=PG)=");
	scanf("%c %d %d",&g,&yos,&qual);
	if(g=='m'&&yos>=10&&qual==1)
	printf("salary=15,000");
	else if(g=='m'&&yos>=10&&qual==0)
	printf("salary=10,000");
	else if((g=='m'&&yos>=10&&qual==0)||(g=='f'&&yos<10&&qual==1))
	printf("salary=10,000");
	else if(g=='m'&&yos<10&&qual==0)
	printf("salary=7,000");
	else if(g=='f'&&yos>=10&&qual==1)
	printf("salary=12,000");
	else if(g=='f'&&yos>=10&&qual==1)
	printf("salary=12,000");
	else if(g=='f'&&yos<10&&qual==1)
	printf("salary=10,000");
	else if(g=='f'&&yos<10&&qual==0)
	printf("salary=6,000");
	else
	printf("Not Eligible");
return 0;
}

