#include<stdio.h>
int main()
{
	int S1,S2,S3,S4,S5,total;
	float per;
	printf("Enter 5 subjects marks");
	scanf("%d%d%d%d%d",&S1,&S2,&S3,&S4,&S5);
	total=S1+S2+S3+S4+S5;
	per=total/5;
	if (per>90)
	printf("A+");
	else{
	
		if (per>85)
		printf("B+");
	
	
	else{
		if(per>80)
		printf("B");
	
	else{
		if(per>70)
		printf("C");		

	else{
	

		printf("Fail");
	
	
}
}
}
}
	return 0;
	
}
